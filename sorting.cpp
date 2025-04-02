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

    dummy = myVector;
    cout << "Running " << setw(20) << "MERGE SORT...";
    mergeSort(dummy);
    cout << "\tIs sorted? " << (is_sorted(dummy.begin(), dummy.end()) ? "YES" : "NO") << "\n";

    dummy = myVector;
    cout << "Running " << setw(20) << "SELECTION SORT...";
    selectionSort(dummy);
    cout << "\tIs sorted? " << (is_sorted(dummy.begin(), dummy.end()) ? "YES" : "NO") << "\n";

    dummy = myVector;
    cout << "Running " << setw(20) << "STL SORT...";
    stlSort(dummy);
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
                swap(myVector[j], myVector[j + 1]);
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
            swap(myVector[j], myVector[j - 1]);

            j--;
        }
    }
}

void mergeSort(vector<int>& myVector)
{
    int length = (int)(myVector.size());

    // A list of length 0 or 1 is trivially sorted.
    if (length > 1)
    {
        vector<int> left;
        vector<int> right;

        for (int i = 0; i < length; ++i)
        {
            if (i < (length / 2))
            {
                left.push_back(myVector[i]);
            }
            else
            {
                right.push_back(myVector[i]);
            }
        }

        mergeSort(left);
        mergeSort(right);

        myVector = merge(left, right);
    }
}

vector<int> merge(const vector<int>& left, const vector<int>& right)
{
    vector<int> result;

    int leftSize = (int)(left.size());
    int rightSize = (int)(right.size());
    int leftIter = 0;
    int rightIter = 0;

    while ((leftIter < leftSize) && (rightIter < rightSize))
    {
        if (left[leftIter] <= right[rightIter])
        {
            result.push_back(left[leftIter]);
            leftIter++;
        }
        else
        {
            result.push_back(right[rightIter]);
            rightIter++;
        }
    }

    // Empty the left-over list
    while (leftIter < leftSize)
    {
        result.push_back(left[leftIter]);
        leftIter++;
    }
    while (rightIter < rightSize)
    {
        result.push_back(right[rightIter]);
        rightIter++;
    }

    return result;
}

// TODO
void quickSort(vector<int>& myVector)
{

}

// TODO
void radixSort(vector<int>& myVector)
{

}

void selectionSort(vector<int>& myVector)
{
    int length = (int)(myVector.size());

    for (int i = 0; i < length - 1; ++i)
    {
        int localMin = i;

        for (int j = i + 1; j < length; ++j)
        {
            if (myVector[j] < myVector[localMin])
            {
                localMin = j;
            }
        }

        if (localMin != i)
        {
            swap(myVector[i], myVector[localMin]);
        }
    }
}

void stlSort(vector<int>& myVector)
{
    sort(myVector.begin(), myVector.end());
}
