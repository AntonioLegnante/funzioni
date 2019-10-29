CC = gcc 
CFLAGS=-ansi -Wall -pedantic
LDLIBS=

main: main.o genera_numeri.o random.o

random.o: random.c random.h
genera_numeri.o: genera_numeri.c random.h
main.o: main.c genera_numeri.c 

.PHONY: clean
clean:
	rm -f *.o main
