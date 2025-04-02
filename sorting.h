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
    void bubbleSort(vector<int>& v); 
    void insertionSort(vector<int>& v);
    void mergeSort(vector<int>& v);
    void quickSort(vector<int>& v);
    void radixSort(vector<int>& v);
    void selectionSort(vector<int>& v);
    void stlSort(vector<int>& v);

#endif