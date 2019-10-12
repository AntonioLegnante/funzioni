CC=gcc
CFLAGS=-Wall -ansi -pedantic
LDLIBS=

main: random.o main.o lancio.o

random.o: random.c random.h
lancio.o: lancio.c lancio.h random.h
main.o: main.c lancio.h

.PHONY: clean
clean:
	rm -f *.o main
