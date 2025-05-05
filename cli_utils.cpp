#include "cli_utils.h"
#include "sorting.h"
#include <algorithm>
#include <chrono>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

typedef struct Results Results;

const string MAIN_MENU_HEADER = "SortProfiler: Main Menu";
const string BENCHMARK_HEADER = "SortProfiler: Sorting Algorithm Benchmark";
const string ANALYZER_HEADER = "SortProfiler: Performance Analyzer";

// All purpose utility
void printHeader(const string& message)
{
    cout << string(80, '-') << "\n" << message << "\n" << string(80, '-') << endl;
}

// Main menu utility
void mainMenu_printMenu()
{
    printHeader(MAIN_MENU_HEADER);
    cout << "Welcome to SortProfiler! This app runs commonly studied sorting algorithms to be profiled.\n\n"
         << "Select an option below:\n"
         << " [1] Sorting Benchmark\n"
         << " [2] Performance Analyzer (TO BE IMPLEMENTED)\n"
         << " [E] Exit program\n";
}

char mainMenu_getInput()
{
    char input = 0;

    cin >> input;
    while (true)
    {
        bool isNotValidMenuOption = input != '1' && input != '2' && input != 'E';

        if (cin.fail() || isNotValidMenuOption)
        {
            cin.clear();
            system("cls");

            mainMenu_printMenu();
            cout << "\nInvalid input. Please select an option above.\n";
            cin >> input;
        }
        else
        {
            break;
        }
    }
    
    return input;
}

// Sorting benchmark utility
void benchmark_startProgram()
{
    // Control variables
    Results benchmarkResults = { false, 0 };
    bool isBenchmarkRunning = true;
    char input = 0;

    while (isBenchmarkRunning)
    {
        system("cls");

        benchmark_printMenu();
        if (benchmarkResults.hasContent)
        {
            cout << "-----------------------------------\n" 
                 << "Time taken: " << benchmarkResults.time << " seconds\n"
                 << "-----------------------------------\n";
        }

        input = benchmark_getInput();

        if (input == '1')
        {
            benchmark_runTest(benchmarkResults);
        }
        else if (input == '2')
        {
            cout << "You entered benchmark settings!\n";
        }
        else 
        {
            isBenchmarkRunning = false;
            system("cls");
        }
    }
}

void benchmark_printMenu()
{
    printHeader(BENCHMARK_HEADER);
    cout << "Current benchmark settings:\n"
         << "\t- Algorithm: BUBBLE\n" 
         << "\t- Number of items to sort: 10000\n"
         << "\t- Create logs? Yes\n\n"
         << "Select an option below:\n"
         << " [1] Run Benchmark (DOES NOTHING)\n"
         << " [2] Configure settings (DOES NOTHING)\n"
         << " [E] Return to main menu\n";
}

char benchmark_getInput()
{
    char input;

    cin >> input;
    while (true)
    {
        bool isNotValidMenuOption = input != '1' && input != '2' && input != 'E';

        if (cin.fail() || isNotValidMenuOption)
        {
            cin.clear();
            system("cls");

            benchmark_printMenu();
            cout << "\nInvalid input. Please select an option above.\n";
            cin >> input;
        }
        else
        {
            break;
        }
    }
    
    return input;
}

void benchmark_runTest(Results& result)
{
    // Dummy value of 10000. To be changed by user if desired later
    vector<int> v(10000);
    generate(v.begin(), v.end(), rand);

    // Default dummy sort. To be changed by user if desired later.
    chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
    bubbleSort(v);
    chrono::high_resolution_clock::time_point end = chrono::high_resolution_clock::now();

    chrono::duration<double> time_span = chrono::duration_cast<chrono::duration<double>>(end - start);
    
    result.time = time_span.count();
    result.hasContent = true;

    benchmark_createLog(result);
}

void benchmark_createLog(const Results& result)
{
    ofstream output("./log.txt");

    if (output.is_open())
    {
        cout << "Creation success\n";
        output << "[Sorting: Bubble Sort]\n" 
               << "Time taken: " << result.time << "s\n"
               << "Elements sorted: 10000\n"; // Temp hardcoded: to be changed
        output.close();
    }
    else 
    { 
        cout << "Failed to open file.\n";
    }
}

// Performance analyzer utility
void analyzer_startProgram()
{
    // Control variables
    bool isAnalyzerRunning = true;
    char input = 0;

    while (isAnalyzerRunning)
    {
        system("cls");

        analyzer_printMenu();
        input = analyzer_getInput();

        if (input == '1')
        {
            cout << "You ran ... (TO BE IMPLEMENTED)!\n";
        }
        else if (input == '2')
        {
            cout << "You entered ... (TO BE IMPLEMENTED)!\n";
        }
        else 
        {
            isAnalyzerRunning = false;
            system("cls");
        }
    }
}

void analyzer_printMenu()
{
    cout << string(80, '-') << "\nSortProfiler: Performance Analyzer\n" << string(80, '-')
         << "\n(To display \"about\" here.)\n\n"
         << "Select an option below:\n"
         << " [1] LOREM (DOES NOTHING)\n"
         << " [2] IPSUM (DOES NOTHING)\n"
         << " [E] Return to main menu\n";
}

char analyzer_getInput()
{
    char input = 0;

    cin >> input;
    while (true)
    {
        bool isNotValidMenuOption = input != '1' && input != '2' && input != 'E';

        if (cin.fail() || isNotValidMenuOption)
        {
            cin.clear();
            system("cls");

            analyzer_printMenu();
            cout << "\nInvalid input. Please select an option above.\n";
            cin >> input;
        }
        else
        {
            break;
        }
    }

    return input;
}