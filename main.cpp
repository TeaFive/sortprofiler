#include "sorting.h"

int main()
{
    int N = 50000;
    int min = 0;
    int max = 2147483647;

    vector<int> testVector = generateRandomVector(N, min, max);

    runAllSortingAlgorithms(testVector);
    
    return 0;
}