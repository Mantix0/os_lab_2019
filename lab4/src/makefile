CC=gcc
path=../../lab3/src
CFLAGS=-I.

parallel_min_max : utils.o find_min_max.o $(path)/utils.h 
	$(CC) -o parallel_min_max utils.o find_min_max.o $(path)/parallel_min_max.c

utils.o : $(path)/utils.h
	$(CC) -o utils.o -c $(path)/utils.c 

find_min_max.o : $(path)/find_min_max.h
	$(CC) -o find_min_max.o -c $(path)/find_min_max.c 

zombie_test: zombie_test.c
	$(CC) zombie_test.c -o zombie_test

process_memory: process_memory.c
	$(CC) process_memory.c -o process_memory

parallel_sum : parallel_sum.c libsum.a
	$(CC) parallel_sum.c -L. -lsum -pthread -o parallel_sum 

libsum.a: sum.c
	$(CC) -o sum.o sum.c -c
	ar rcs libsum.a sum.o

clean :
	rm parallel_min_max.o parallel_min_max parallel_sync.txt zombie_test.o zombie_test process_memory.o process_memory parallel_sum.o parallel_sum sum.o libsum.a find_min_max.o test.txt utils.o