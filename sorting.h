#ifndef SORTING_H
#define SORTING_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void bubbleSort(vector<int>& v); 
void insertionSort(vector<int>& v);
void mergeSort(vector<int>& v);
void quickSort(vector<int>& v);
void radixSort(vector<int>& v);
void stlSort(vector<int>& v);

#endif