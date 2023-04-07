// Tiffany Decker: program layout
// Zach Coomer: 
// Wesley Duclos:

#ifndef HEAP_H
#define HEAP_H

#include "heap.h"
#include <vector>

/*
* Class used to build heaps
* 
* @class heap heap.h "Heap_Practice/heap.h"
* @brief creates a binary heap of signed integers
* 
*/
class heap {
private:
	std::vector; <int> buffer;
public:

	/*
	* Default constructor used to initiailze a heap
	*
	* @pre heap class must be difined
	* @post a default constructor is instantiated
	*
	*/
	heap();

	/*
	* The numerical value for the size of the heap
	*
	* @pre must be defined and hold an int value
	* @post can be used as the size of the vector
	*
	*/
	int size();

	/*
	* A function to insert an int value into a heap
	*
	* @pre must be defined and have access to a valid int value
	* @post allows the insertion of an int value into the heap
	*
	*/
	void insert(int value);

	/*
	* A function to remove a maximum value
	*
	* @pre must be defined and have accessable values
	* @post removes the value that is considered the largest
	*
	*/
	void remove_max();

	/*
	* The numerical value for the max value of the integers inside the heap
	*
	* @pre must be defined and have access to a vector of int values to compare
	* @post can be used as the maximum value in a vector
	*
	*/
	int max();

	/*
	* A function to print the data from the vector
	*
	* @pre must be defined and have access to the vector in question
	* @post prints all required data to the console
	*
	*/
	void print();
};