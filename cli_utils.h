#ifndef CLI_UTILS_H
#define CLI_UTILS_H

#include <string>

/**
 *  NOTE:
 *  A lot of these utility functions share the same function bodies. For
 *  simplicity to start, I'll have these as separate functions for verbose
 *  clarity. In the future, we might want to condense these to one or two
 *  functions knows how to handle the program based on context.abort
 * 
 *  This is also on the "notes to future me.
 */

// All purpose utility
void printHeader(const std::string& message);

// Main menu utility
void mainMenu_printMenu();
char mainMenu_getInput();

// Sorting benchmark utility
void benchmark_startProgram();
void benchmark_printMenu();
char benchmark_getInput();

void benchmark_runTest();

// Performance analyzer utility
void analyzer_startProgram();
void analyzer_printMenu();
char analyzer_getInput();

#endif