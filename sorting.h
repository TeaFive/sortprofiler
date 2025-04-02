#ifndef SORTING_H
#define SORTING_H

    #include <algorithm>
    #include <chrono>
    #include <cmath>
    #include <iomanip>
    #include <iostream>
    #include <random>
    #include <vector>

    using namespace std;
    using namespace chrono;

    // Auxilliary functions
    void printVector(const vector<int>& v);
    vector<int> generateRandomVector(int N, int min, int max);
    void runAllSortingAlgorithms(const vector<int>& v);

    // Sorting algorithms
    // Note this is the early exit implementation.
    // Reference: https://en.wikipedia.org/wiki/Bubble_sort#Pseudocode_implementation
    void bubbleSort(vector<int>& v); 

    // Reference: https://en.wikipedia.org/wiki/Insertion_sort#List_insertion_sort_code_in_C
    void insertionSort(vector<int>& v);

    // Reference: https://en.wikipedia.org/wiki/Merge_sort#Top-down_implementation_using_lists
    void mergeSort(vector<int>& v);

    // Merge sort helper function
    vector<int> merge(const vector<int>& left, const vector<int>& right);

    // Reference: https://www.w3schools.com/dsa/dsa_algo_quicksort.php
    void quickSort(vector<int>& v, int lo = 0, int hi = -1);

    // Quick Sort helper function
    int partition(vector<int>& v, int lo, int hi);

    // Reference: https://www.w3schools.com/dsa/dsa_algo_radixsort.php
    void radixSort(vector<int>& v);

    // Reference: https://en.wikipedia.org/wiki/Selection_sort#Implementations
    void selectionSort(vector<int>& v);

    // Reference: https://cplusplus.com/reference/algorithm/sort/
    void stlSort(vector<int>& v);

#endif