#!/bin/bash
gcc -Wall -wextra -werror -pedeantic -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY=.:SLD_LIBRARY_PATH
