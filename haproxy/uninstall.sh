#!/usr/bin/env bash


# kill the docker instances we spun up
docker kill echo0 echo1 echo2 echo3 echo4 haproxy
# remove the network we created
docker network rm testnet
# remove the generated haproxy config and socket directory
rm -rf haproxy.cfg socket
# prove to everyone we are clean
docker ps
