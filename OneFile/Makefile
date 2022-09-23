# Makefile for one file c program

main: compile run clean

compile: onefile.c
	clang -lm onefile.c -o executable.exe

run: executable.exe
	./executable.exe

clean: executable.exe
	rm -f executable.exe
