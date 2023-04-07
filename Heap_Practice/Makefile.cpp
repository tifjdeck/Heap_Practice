
CC = g++
CFLAGS = -g - Wall - Wextra

default: heap

	heap.o : heap.cpp heap.h
	$(CC) $(CFLAGS) - c heap.cpp

	main.o : main.cpp heap.h
	$(CC) $(CFLAGS) - c main.cpp

//	clean :
//$(RM) heap * .o * ~