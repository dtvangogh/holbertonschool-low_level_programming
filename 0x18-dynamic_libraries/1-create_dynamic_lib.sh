#!/bin/bash
gcc -fPIC -c -Wall -pedantic -Werror -Wextra *.c
gcc -shared -o liball.so *.o
