#include "cli_utils.h"
#include "sorting.h"
#include "helpers.h"
#include <iostream>

using namespace std;

int main()
{

    // Control variable(s)
    bool isRunning = true;
    char input = 0;

    while (isRunning)
    {
        system("cls");

        mainMenu_printMenu();
        input = mainMenu_getInput();

        if (input == 'E')
        {
            cout << "Thank you for using SortProfiler. Exiting program.\n";
            isRunning = false;
        }
        else if (input == '1')
        {
            benchmark_startProgram();
        }
        else 
        {
           analyzer_startProgram();
        }
    }
    
    return 0;
}