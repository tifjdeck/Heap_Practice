// Tiffany Decker: program layout
// Zach Coomer: 
// Wesley Duclos:

#include "heap.h"
#include <vector>

class heap {
private:
	std::vector<int> buffer;
public:
	heap();
	int size();
	void insert(int value);
	void remove_max();
	int max();
	void print();
};
