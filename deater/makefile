all: deater

deater: main.o isnum.o
	gcc main.o isnum.o -o deater
isnum.o: isnum.c isnum.h
	gcc -c isnum.c
main.o: main.c isnum.c
	gcc -c main.c
clean:
	-rm -rf *.o deater
