#include "sorting.h"
#include <algorithm>
#include <vector>

using namespace std;

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

void quickSort(vector<int>& myVector, int lo, int hi)
{
    if (hi == -1)
    {
        hi = ((int)(myVector.size())) - 1;
    }

    if (lo < hi)
    {
        int pivot = partition(myVector, lo, hi);
        quickSort(myVector, lo, pivot - 1);
        quickSort(myVector, pivot + 1, hi);
    }
}

int partition(vector<int>& myVector, int lo, int hi)
{
    int pivot = myVector[hi];
    int i = lo - 1;

    for (int j = lo; j < hi; ++j)
    {
        if (myVector[j] <= pivot)
        {
            i++;
            swap(myVector[i], myVector[j]);
        }
    }

    swap(myVector[i + 1], myVector[hi]);
    return (i + 1);
}

void radixSort(vector<int>& myVector)
{
    int maxNum = *(max_element(myVector.begin(), myVector.end()));
    vector<vector<int>> radixBuckets(10, vector<int>());
    int exp = 1;

    while ((int)(maxNum / exp) > 0)
    {
        while (!myVector.empty())
        {
            int currentNum = myVector.back();
            myVector.pop_back();

            int radixIndex = ((int)(currentNum / exp)) % 10;
            radixBuckets[radixIndex].push_back(currentNum);
        }

        for (vector<int>& bucket : radixBuckets)
        {
            while (!bucket.empty())
            {
                int num = bucket.back();
                bucket.pop_back();

                myVector.push_back(num);
            }
        }

        exp *= 10;
    }
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
