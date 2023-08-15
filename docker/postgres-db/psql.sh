#!/usr/bin/env bash
#this gets you a psql shell to the db
psql_ip="$( docker inspect -f '{{range.NetworkSettings.Networks}}{{.IPAddress}}{{end}}' some-postgres )"
docker run --rm -it postgres psql postgresql://postgres:mysecretpassword@${psql_ip}:5432
