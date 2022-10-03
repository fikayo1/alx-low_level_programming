#!/bin/bash
gcc -c -fPID *.c
gcc -shared -o liball.so *.o
