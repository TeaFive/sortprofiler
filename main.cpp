#include "sorting.h"
#include "helpers.h"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    cout << string(80, '-') << "\nWelcome to SortProfiler!\n" << string(80, '-')
         << "\nThis app runs commonly studied sorting algorithms to be profiled.\n\n"
         << "Select an option below:\n"
         << " [1] Sorting Benchmark\n"
         << " [2] Performance Analyzer (TO BE IMPLEMENTED)\n"
         << " [3] Settings\n"
         << " [E] Exit program.\n";
    
    return 0;
}