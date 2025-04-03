#include "helpers.h"
#include "sorting.h"
#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>

using namespace std;
using namespace chrono;

void printVector(const vector<int>& myVector)
{
    cout << "Vector elements: ";
    for (int num : myVector)
    {
        cout << num << " ";
    }
    cout << "\n";
}

vector<int> generateRandomVector(int N, int min, int max)
{
    if (N < 1) { cerr << "Number of elements N needs to be one (1) or greater." << endl; }
    if (max < min) { cerr << "Max cannot be less than min." << endl; }
    if (min < 0) { cerr << "Min cannot be a negative number." << endl; }

    vector<int> result(N);

    random_device seed;
    mt19937 gen(seed());
    uniform_int_distribution<> distrib(min, max);

    generate(result.begin(), result.end(), [&]() { 
        return distrib(gen); 
    });

    return result;
}

void runAllSortingAlgorithms(const vector<int>& myVector)
{
    cout << left << setw(25) << "SORTING ALGORITHM" << left << setw(20) << "IS SORTED?" << left << setw(15) << "TIME ELAPSED" << endl; 

    vector<int> dummy = myVector;
    high_resolution_clock::time_point start;
    high_resolution_clock::time_point end;
    duration<double> timeSpan;

    start = high_resolution_clock::now();
    bubbleSort(dummy);
    end = high_resolution_clock::now();
    timeSpan = duration_cast<duration<double>>(end - start);
    cout << left << setw(25) << "BUBBLE SORT" 
         << setw(20) << (is_sorted(dummy.begin(), dummy.end()) ? "YES" : "NO") 
         << timeSpan.count() << " ms" << "\n";

    dummy = myVector;
    start = high_resolution_clock::now();
    insertionSort(dummy);
    end = high_resolution_clock::now();
    timeSpan = duration_cast<duration<double>>(end - start);
    cout << left << setw(25) << "INSERTION SORT" 
         << setw(20) << (is_sorted(dummy.begin(), dummy.end()) ? "YES" : "NO")
         << timeSpan.count() << " ms" << "\n";

    dummy = myVector;
    start = high_resolution_clock::now();
    mergeSort(dummy);
    end = high_resolution_clock::now();
    timeSpan = duration_cast<duration<double>>(end - start);
    cout << left << setw(25) << "MERGE SORT"
         << setw(20) << (is_sorted(dummy.begin(), dummy.end()) ? "YES" : "NO")
         << timeSpan.count() << " ms" << "\n";

    dummy = myVector;
    start = high_resolution_clock::now();
    quickSort(dummy);
    end = high_resolution_clock::now();
    timeSpan = duration_cast<duration<double>>(end - start);
    cout << left << setw(25) << "QUICK SORT" 
         << setw(20) << (is_sorted(dummy.begin(), dummy.end()) ? "YES" : "NO")
         << timeSpan.count() << " ms" << "\n";

    dummy = myVector;
    start = high_resolution_clock::now();
    radixSort(dummy);
    end = high_resolution_clock::now();
    timeSpan = duration_cast<duration<double>>(end - start);
    cout << left << setw(25) << "RADIX SORT" 
         << setw(20) << (is_sorted(dummy.begin(), dummy.end()) ? "YES" : "NO")
         << timeSpan.count() << " ms" << "\n";

    dummy = myVector;
    start = high_resolution_clock::now();
    selectionSort(dummy);
    end = high_resolution_clock::now();
    timeSpan = duration_cast<duration<double>>(end - start);
    cout << left << setw(25) << "SELECTION SORT" 
         << setw(20) << (is_sorted(dummy.begin(), dummy.end()) ? "YES" : "NO") 
         << timeSpan.count() << " ms" << "\n";

    dummy = myVector;
    start = high_resolution_clock::now();
    stlSort(dummy);
    end = high_resolution_clock::now();
    timeSpan = duration_cast<duration<double>>(end - start);
    cout << left << setw(25) << "STL SORT" 
         << setw(20) << (is_sorted(dummy.begin(), dummy.end()) ? "YES" : "NO")
         << timeSpan.count() << " ms" << "\n";
}