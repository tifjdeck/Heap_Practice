#
# Zach Coomer, Tiffany Decker, Wesley Duclos
# Date: 4/16/2023
# Makefile for Program 2: The Heap
# This file has compilation instructions for Program 2: The Heap
#

# compilation varibles
CC = g++
CFLAGS = -g -Wall -Wextra

# default entry for calling 'make'
default: heap

# files needed to create the executable file
heap: heap.o main.o
	$(CC) $(CFLAGS) -o heap heap.o main.o

# rule to create heap.o
heap.o: heap.cpp heap.h
	$(CC) $(CFLAGS) -c heap.cpp

# rule to create main.o
main.o: main.cpp heap.h
	$(CC) $(CFLAGS) -c main.cpp

# logic for 'make clean'
clean:
	$(RM) heap *.o *~
