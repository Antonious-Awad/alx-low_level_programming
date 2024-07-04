#!/bin/bash
# Syntax example:  alx-c-run 104-print_buffer.c 
numeric_part=$(echo "$1" | rev | cut -d'-' -f2- | rev)
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 $1 $numeric_part-main.c
./a.out
rm a.out