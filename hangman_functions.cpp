#include "hangman_functions.h"
#include <iostream>
#include <vector>
#include <time.h>
#include <limits>
#include <conio.h> 
using namespace std;

// function definitions

string get_word() {
    vector<string> word_list = {"creative", "behavior", "array", "remember", "commute", "grateful", "present", "monster"};
    srand(time(NULL));
    return word_list[rand() % word_list.size()];
}

string create_blanks(string & word) {
    string blanks = "";
    for (unsigned int i = 0; i < word.length(); i++) {
        blanks += "_ ";
    }
    return blanks;
}

void display_man(int misses) {
    switch(misses) {
        case 0:
            cout << "  +---+\n";
            cout << "  |   |\n";
            cout << "      |\n";
            cout << "      |\n";
            cout << "      |\n";
            cout << "      |\n";
            cout << "---------\n";
            break;
        case 1:
            cout << "  +---+\n";
            cout << "  |   |\n";
            cout << "  O   |\n";
            cout << "      |\n";
            cout << "      |\n";
            cout << "      |\n";
            cout << "---------\n";
            break;
        case 2:
            cout << "  +---+\n";
            cout << "  |   |\n";
            cout << "  O   |\n";
            cout << "  |   |\n";
            cout << "      |\n";
            cout << "      |\n";
            cout << "---------\n";
            break;
        case 3:
            cout << "  +---+\n";
            cout << "  |   |\n";
            cout << "  O   |\n";
            cout << " /|   |\n";
            cout << "      |\n";
            cout << "      |\n";
            cout << "---------\n";
            break;
        case 4:
            cout << "  +---+\n";
            cout << "  |   |\n";
            cout << "  O   |\n";
            cout << " /|\\  |\n";
            cout << "      |\n";
            cout << "      |\n";
            cout << "---------\n";
            break;
        case 5:
            cout << "  +---+\n";
            cout << "  |   |\n";
            cout << "  O   |\n";
            cout << " /|\\  |\n";
            cout << " /    |\n";
            cout << "      |\n";
            cout << "---------\n";
            break;
        case 6:
            cout << "  +---+\n";
            cout << "  |   |\n";
            cout << "  O   |\n";
            cout << " /|\\  | GAME OVER!\n";
            cout << " / \\  |\n";
            cout << "      |\n";
            cout << "=========\n";
    }
}