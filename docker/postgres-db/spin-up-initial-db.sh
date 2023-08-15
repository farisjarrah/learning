#!/usr/bin/env bash
#this spins up a super basic postgres db on port 5432
docker run --name some-postgres -p 5432:5432 -e POSTGRES_PASSWORD=mysecretpassword -d postgres
