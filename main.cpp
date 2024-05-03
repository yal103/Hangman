#include <iostream>
#include <vector>
#include <time.h>
#include "hangman_functions.h"
#include <limits>
using namespace std;

int main() {
    // Your code here
    string guessedLetters;
    cout << "=========" << endl;
    cout << " HANGMAN " << endl;
    cout << "=========" << endl;
    cout << "Guess the letters of the word before the hangman is drawn!" << endl;
    cout << "Press Enter to Continue ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string word = get_word();
    cout << word << endl; // COMMENT OUT THIS LINE BEFORE SUBMITTING
    return 0;
}

