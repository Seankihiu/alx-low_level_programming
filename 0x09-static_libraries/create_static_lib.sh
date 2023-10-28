#!/bin/bash
gcc -Wall -Pedantic -Werror -Wextra -C *.c
ar -rc liball.a *.o
ranlib liball.a
