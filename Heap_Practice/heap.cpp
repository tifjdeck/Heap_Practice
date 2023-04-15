// Tiffany Decker: program layout
// Zach Coomer: 
// Wesley Duclos:

#include <iostream>
#include <vector>
#include "heap.h"

class heap {
private:
    std::vector<int> buffer;

public:
    heap() = default;

    // Return the number of elements in the heap
    int size() const { return buffer.size(); }

    // Insert an element into the heap
    void insert(int value);

    // Remove the maximum element from the heap
    void remove_max();

    // Return the maximum element in the heap
    int max() const;

    // Print the heap
    void print() const;
};

void heap::insert(int value) {
    // Insert the element at the end of the vector
    buffer.push_back(value);
}

void heap::remove_max() {
    // If the heap is empty, we can't remove anything
    if (size() == 0) return;

    // Replace the maximum element with the last element in the vector
    int temp = buffer[0];
    buffer[0] = buffer[size() - 1];
    buffer[size() - 1] = temp;

    // Remove the last element from the vector
    buffer.pop_back();
}

int heap::max() const {
    // If the heap is empty, we can't return anything
    if (size() == 0) return -1;

    // The maximum element is always at the root of the heap
    return buffer[0];
}

void heap::print() const {
    for (int i = 0; i < size(); i++) {
        std::cout << buffer[i] << " ";
    }
    std::cout << std::endl;
}

