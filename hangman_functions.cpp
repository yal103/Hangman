#include "hangman_functions.h"
#include <iostream>
#include <vector>
#include <time.h>
#include <limits>
using namespace std;

// function definitions

string get_word() {
    vector<string> word_list = {"creative", "behavior", "array", "remember", "commute", "grateful", "present", "monster"};
    srand(time(NULL));
    return word_list[rand() % word_list.size()];
}