CC = gcc 
CFLAGS=-ansi -Wall -pedantic
LDLIBS=

main: main.o lancio.o random.o

random.o: random.c random.h
lancio.o: lancio.c random.h
main.o: main.c lancio.c

.PHONY: clean
clean:
	rm -f *.o main
