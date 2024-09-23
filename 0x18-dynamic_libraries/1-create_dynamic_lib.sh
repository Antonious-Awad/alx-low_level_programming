#!/bin/bash
gcc -c *.c
gcc -shared -o -lall.so *.o