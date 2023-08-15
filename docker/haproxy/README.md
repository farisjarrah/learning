# haproxy test

* this is just a test of haproxy with docker.

## install.sh

* launches 5 http-echo servers that simply state their names
* generates a haproxy config, and puts the http-echo servers behind haproxy
* launches a haproxy instance
* tells you how to access the newly launched resources

## uninstall.sh
* stops and removes all running containers and removos the haproxy config and socket folders that were generated
