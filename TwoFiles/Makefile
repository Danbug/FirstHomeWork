# Makefile for one file c program

#constants
CC = clang
CFLAGS = -c -Wall
FILENAME = executable.exe

main: compileF compileG compileMain link run clean

link: main.o f.o g.o 
	$(CC) -lm main.o -lm f.o -lm g.o -o $(FILENAME)

compileF: f.c
	$(CC) $(CFLAGS) f.c -o f.o

compileG: g.c
	$(CC) $(CFLAGS) g.c -o g.o
	
compileMain: main.c
	$(CC) $(CFLAGS) main.c -o main.o

run: $(FILENAME)
	./$(FILENAME)

clean: 
	rm -f $(FILENAME)
	rm -f *.o
	