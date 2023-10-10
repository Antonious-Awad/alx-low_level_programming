#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 $1
./a.out
rm a.out