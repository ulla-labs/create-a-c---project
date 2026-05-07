#include <iostream>
#include <vector>
#include "bubble_sort.h"

int main() {
    std::vector<int> data = {64, 34, 25, 12, 22, 11, 90};

    std::cout << "Unsorted array: \n";
    printArray(data);

    bubbleSort(data);

    std::cout << "Sorted array: \n";
    printArray(data);

    return 0;
}