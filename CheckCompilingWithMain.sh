#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 $1 $2-main.c
./a.out
rm a.out