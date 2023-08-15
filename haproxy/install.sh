#!/usr/bin/env bash

# create a docker network for this mess
docker network create testnet

# make a fake socket directory for haproxy
mkdir socket

# make 5 http-echo servers that just say their name
for i in {0..4} ; do
  docker run --platform="linux/amd64" --rm -d --name="echo${i}" --network="testnet" hashicorp/http-echo -text="hello server ${i}"
done

# get all the http-echo server ip addresses
echo0_ip="$(docker inspect  -f '{{range.NetworkSettings.Networks}}{{.IPAddress}}{{end}}' echo0)"
echo1_ip="$(docker inspect  -f '{{range.NetworkSettings.Networks}}{{.IPAddress}}{{end}}' echo1)"
echo2_ip="$(docker inspect  -f '{{range.NetworkSettings.Networks}}{{.IPAddress}}{{end}}' echo2)"
echo3_ip="$(docker inspect  -f '{{range.NetworkSettings.Networks}}{{.IPAddress}}{{end}}' echo3)"
echo4_ip="$(docker inspect  -f '{{range.NetworkSettings.Networks}}{{.IPAddress}}{{end}}' echo4)"


# generate the haproxy config
cat <<EOF > haproxy.cfg
global
#  stats socket /var/run/api.sock user haproxy group haproxy mode 660 level admin expose-fd listeners
  log stdout format raw local0 info

defaults
  mode http
  timeout client 10s
  timeout connect 5s
  timeout server 10s
  timeout http-request 10s
  log global


frontend stats
  bind *:8404
  stats enable
  stats uri /
  stats refresh 10s

frontend web
  bind *:80
  mode http
  use_backend webservers

backend webservers
EOF

# add the http-echo servers to the generated haproxy config
echo "  server echo0 ${echo0_ip}:5678 check" >> haproxy.cfg
echo "  server echo1 ${echo1_ip}:5678 check" >> haproxy.cfg
echo "  server echo2 ${echo2_ip}:5678 check" >> haproxy.cfg
echo "  server echo3 ${echo3_ip}:5678 check" >> haproxy.cfg
echo "  server echo4 ${echo4_ip}:5678 check" >> haproxy.cfg

# launch haproxy
docker run --name="haproxy" --rm -d --network="testnet" -v $(pwd):/usr/local/etc/haproxy:ro -v $(pwd)/socket:/var/run/api.sock -p 80:80 -p 8404:8404 --sysctl net.ipv4.ip_unprivileged_port_start=0 haproxy:latest

# show the world the evils we've unleashed
docker ps

# tell the class
echo "Open a browser on localhost:80 and you can refresh the page to see the different servers showing up"
echo "Open a browser on localhost:8404 to see the haproxy dashboard"
