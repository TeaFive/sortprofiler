#include "sorting.h"

void printVector(const vector<int>& myVector)
{
    cout << "Vector elements: ";
    for (int num : myVector)
    {
        cout << num << " ";
    }
    cout << "\n";
}

void runAllSortingAlgorithms(const vector<int>& myVector)
{
    // TO ADD: Time implementation
    // Look at <chrono>
    // https://cplusplus.com/reference/chrono/high_resolution_clock/now/

    vector<int> dummy = myVector;
    cout << "Running " << setw(20) << "BUBBLE SORT...";
    bubbleSort(dummy);
    cout << "\tIs sorted? " << (is_sorted(dummy.begin(), dummy.end()) ? "YES" : "NO") << "\n";

    dummy = myVector;
    cout << "Running " << setw(20) << "INSERTION SORT...";
    insertionSort(dummy);
    cout << "\tIs sorted? " << (is_sorted(dummy.begin(), dummy.end()) ? "YES" : "NO") << "\n";


}

// Early exit implementation
void bubbleSort(vector<int>& myVector)
{
    int length = (int)(myVector.size());

    for (int i = 0; i < length - 1; ++i)
    {
        bool swapped = false;
        for (int j = 0; j < length - i - 1; ++j)
        {
            if (myVector[j] > myVector[j + 1])
            {
                int temp = myVector[j];
                myVector[j] = myVector[j + 1];
                myVector[j + 1] = temp;
                swapped = true;
            }
        }

        if (!swapped)
        {
            break;
        }
    }
}

void insertionSort(vector<int>& myVector)
{
    int length = (int)(myVector.size());

    for (int i = 0; i < length; ++i)
    {
        int j = i;

        while ((j > 0) && (myVector[j - 1] > myVector[j]))
        {
            int temp = myVector[j];
            myVector[j] = myVector[j - 1];
            myVector[j - 1] = temp;

            j--;
        }
    }
}

// TODO
void mergeSort(vector<int>& myVector)
{

}

// TODO
void quickSort(vector<int>& myVector)
{

}

// TODO
void radixSort(vector<int>& myVector)
{

}

// TODO
void selectionSort(vector<int>& v)
{

}

void stlSort(vector<int>& myVector)
{
    sort(myVector.begin(), myVector.end());
}
