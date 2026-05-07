#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include <vector>

/**
 * Sorts a vector of integers using the bubble sort algorithm.
 * @param arr Reference to the vector to be sorted.
 */
void bubbleSort(std::vector<int>& arr);

/**
 * Utility function to print the contents of a vector.
 * @param arr Reference to the vector to be printed.
 */
void printArray(const std::vector<int>& arr);

#endif