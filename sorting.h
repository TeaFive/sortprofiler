#ifndef SORTING_H
#define SORTING_H

#include <vector>

// Sorting algorithms
// Note this is the early exit implementation.
// Reference: https://en.wikipedia.org/wiki/Bubble_sort#Pseudocode_implementation
void bubbleSort(std::vector<int>& v); 

// Reference: https://en.wikipedia.org/wiki/Insertion_sort#List_insertion_sort_code_in_C
void insertionSort(std::vector<int>& v);

// Reference: https://en.wikipedia.org/wiki/Merge_sort#Top-down_implementation_using_lists
void mergeSort(std::vector<int>& v);

// Merge sort helper function
std::vector<int> merge(const std::vector<int>& left, const std::vector<int>& right);

// Reference: https://www.w3schools.com/dsa/dsa_algo_quicksort.php
void quickSort(std::vector<int>& v, int lo = 0, int hi = -1);

// Quick Sort helper function
int partition(std::vector<int>& v, int lo, int hi);

// Reference: https://www.w3schools.com/dsa/dsa_algo_radixsort.php
void radixSort(std::vector<int>& v);

// Reference: https://en.wikipedia.org/wiki/Selection_sort#Implementations
void selectionSort(std::vector<int>& v);

// Reference: https://cplusplus.com/reference/algorithm/sort/
void stlSort(std::vector<int>& v);

#endif