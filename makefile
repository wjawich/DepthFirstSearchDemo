# makefile for the the depth first search question

all: dfs

dfs: dfs.o stack.o
	gcc -std=c99 -o dfs dfs.o stack.o

dfs.o: dfs.c stack.h
	gcc -std=c99 -c dfs.c

stack.o: stack.c stack.h
	gcc -std=c99 -c stack.c

clean: 
	rm dfs dfs.o stack.o