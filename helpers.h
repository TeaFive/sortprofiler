#ifndef HELPERS_H
#define HELPERS_H

#include <vector>

void printVector(const std::vector<int>& v);

std::vector<int> generateRandomVector(int N, int min, int max);

void runAllSortingAlgorithms(const std::vector<int>& v);

#endif