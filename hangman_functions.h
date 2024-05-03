#ifndef HANGMAN_FUNCTIONS_H
#define HANGMAN_FUNCTIONS_H
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