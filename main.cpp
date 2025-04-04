#include "cli_utils.h"
#include "sorting.h"
#include "helpers.h"
#include <iostream>

using namespace std;

int main()
{
    // Control variables
    char selectedOption;

    printMainMenuPrompt();
    selectedOption = handleMainMenuSelection();
    cout << "Selected option: " << selectedOption << "\n";

    

    
    return 0;
}