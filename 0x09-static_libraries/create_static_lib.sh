#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c  *.c
ar -cr liball.a *.o
