all: phone

phone: phone.o phone_fmt.o
	gcc phone.o phone_fmt.o -o phone
phone.o: phone.c phone_fmt.c
	gcc -c phone.c phone_fmt.c
phone_fmt.o: phone_fmt.c phone_fmt.h
	gcc -c phone_fmt.c
clean:
	-rm -rf *.o phone
