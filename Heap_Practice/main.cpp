// Tiffany Decker: program layout
// Zach Coomer: 
// Wesley Duclos:

#include <iostream>
#include <vector>
#include "heap.h"
#include "heap.cpp"

int main() {
    heap h;

    // Insert some values into the heap
    h.insert(5);
    h.insert(10);
    h.insert(3);
    h.insert(8);

    // Print the contents of the heap
    h.print();

    // Remove the maximum value from the heap
    h.remove_max();

    // Print the new contents of the heap
    h.print();

    // Print the maximum value in the heap
    std::cout << "Max value: " << h.max() << std::endl;

    return 0;
}
