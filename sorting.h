#ifndef SORTING_H
#define SORTING_H

    #include <algorithm>
    #include <chrono>
    #include <iomanip>
    #include <iostream>
    #include <vector>

    using namespace std;
    using namespace chrono;

    #define chrono_time_point high_resolution_clock::time_point

    // Auxilliary functions
    void printVector(const vector<int>& v);
    void runAllSortingAlgorithms(const vector<int>& v);

    // Sorting algorithms
    // Reference: https://en.wikipedia.org/wiki/Bubble_sort#Pseudocode_implementation
    void bubbleSort(vector<int>& v); 

    // Reference: https://en.wikipedia.org/wiki/Insertion_sort#List_insertion_sort_code_in_C
    void insertionSort(vector<int>& v);

    // Reference: https://en.wikipedia.org/wiki/Merge_sort#Top-down_implementation_using_lists
    void mergeSort(vector<int>& v);

    // Merge sort helper function
    vector<int> merge(const vector<int>& left, const vector<int>& right);

    void quickSort(vector<int>& v);

    void radixSort(vector<int>& v);

    // Reference: https://en.wikipedia.org/wiki/Selection_sort#Implementations
    void selectionSort(vector<int>& v);

    // Reference: https://cplusplus.com/reference/algorithm/sort/
    void stlSort(vector<int>& v);

#endif