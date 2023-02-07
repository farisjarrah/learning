# Practice problems for Beej's Guide to C Programming

https://beej.us/guide/

## compilation flags used for this book
gcc -Wall -Wextra -std=c2x -pedantic filename.c

## dependences used for this project
* ubuntu 22.04
* gcc
* gnu make
* bash

## how to run
You can run any of the c files by calling `make <name-of-file-without-extension>`. For example to run Hello World from chapter 3 that is in the `ch3/hello.c` file. Do the following from the root of this repository:
```
make hello
```

If you want to run everything from a chapter:
```
make ch4
```

Simply running `make` will print a help message. After the program runs the binary is automatically cleaned up.

## Practice Log
* 2023/01/16 - Begin -> Ch. 3.1.3
* 2023/01/17 - Ch. 3.2 -> 3.3.1
* 2023/01/19 - Ch 3.3.2 -> 3.3.5, Ch 4
