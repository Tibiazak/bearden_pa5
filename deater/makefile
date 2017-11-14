all: deater

deater: main.o
        gcc main.o -o deater

main.o: main.c
        gcc -c main.c

clean:
        -rm -f *.o deater