CC = gcc
CFLAGS = -I. -std=c99

main: main.c helloworld.c
	$(CC) $(CFLAGS) -o main main.c helloworld.c -I.
