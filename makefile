# makefile for unix systems
# using a GNU C compiler

CC=gcc
CFLAGS=-g -D__USE_FIXED_PROTOTYPES__ -ansi

# Compiler flags:
#           -g      -- enable debugging
#           -Wall   -- turn on all warnings (not used since it gives away the bug in this program)
#           -D__USE_FIXED_PROTOTYPES__
#                   -- force the compiler to use the correct headers
#           -ansi   -- don't use GNU extensions.  Stick to ANSI C.

calc1: calc1.c
		$(CC) $(CFLAGS) -o calc1 calc1.c

clean:
		rm -f calc1