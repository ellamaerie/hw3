#include <iostream>
#include "heap.h"

//g++ -o heap_test heap_test.cpp -std=c++11
// ./heap_test

int main() {
    Heap<int> minHeap(3);

    minHeap.push(10);
    minHeap.push(5);
    minHeap.push(20);
    minHeap.push(1);

    std::cout << "Top " << minHeap.top() << std::endl;

    minHeap.pop();
    std::cout << "After Pop Top " << minHeap.top() << std::endl;

    minHeap.pop();
    std::cout << "After Pop Top " << minHeap.top() << std::endl;

    std::cout << "Size " << minHeap.size() << std:: endl;

    return 0;
}