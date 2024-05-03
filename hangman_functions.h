#ifndef hangman_functions_h
#define hangman_functions_h
#include <iostream>
#include <vector>
#include <time.h>
#include <limits>
#include <conio.h> 
using namespace std;

// function declarations
string get_word();
void display_man(int misses);
string create_blanks(string & word);
#endif