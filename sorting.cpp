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

void runAllSorts(const vector<int>& v)
{
    
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

}

void mergeSort(vector<int>& myVector)
{

}

void quickSort(vector<int>& myVector)
{

}

void radixSort(vector<int>& myVector)
{

}

void selectionSort(vector<int>& v)
{

}

void stlSort(vector<int>& myVector)
{

}
