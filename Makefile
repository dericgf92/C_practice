CC = gcc
CFLAGS = -I.

main: main.c helloworld.c
	$(CC) -o main main.c helloworld.c -I.
