#include "cli_utils.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void printMainMenuPrompt()
{
    cout << string(80, '-') << "\nWelcome to SortProfiler!\n" << string(80, '-')
         << "\nThis app runs commonly studied sorting algorithms to be profiled.\n\n"
         << "Select an option below:\n"
         << " [1] Sorting Benchmark\n"
         << " [2] Performance Analyzer (TO BE IMPLEMENTED)\n"
         << " [E] Exit program\n";
}

char handleMainMenuSelection()
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
            printMainMenuPrompt();
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