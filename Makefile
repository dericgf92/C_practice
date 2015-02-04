CC = gcc
CFLAGS = -I.

main: main.o helloworld.o
	$(CC) -o main main.o helloworld.o -I.