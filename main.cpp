#include <iostream>
#include <vector>
#include <time.h>
#include <limits>
#include "hangman_functions.h"
using namespace std;

int main() {
    // welcome message
    cout << "=========" << endl;
    cout << " HANGMAN " << endl;
    cout << "=========" << endl;
    cout << "Guess the letters of the word before the hangman is drawn!" << endl;
    cout << " " << endl;
    cout << "Press Enter to Begin ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // game variables
    string word = get_word();
    string word_blanks = create_blanks(word);
    string guessed_letters ="";
    string guess = "";
    unsigned int misses = 0;


    // game loop
    while (misses < 6) {
        display_man(misses);
        cout << "Misses: " << misses << "/6" << endl;
        cout << "Guessed Letters: " << guessed_letters << endl;
        cout << "Word: " << word_blanks << endl;
        cout << "Guess a letter: ";
        cin >> guess;

        // check if the guess has already been guessed
        while (guessed_letters.find(guess) != string::npos) {
            cout << "You already guessed that letter. Try again." << endl;
            cout << "Guess a letter: ";
            cin >> guess;
        }
        // require a single letter guess
        while (guess.length() != 1 && guess[0] < 'a' && guess[0] > 'Z') {
            cout << "Invalid guess. Please enter a single letter." << endl;
            cout << "Guess a letter: ";
            cin >> guess;
            guess = tolower(guess[0]);
        }
        guess = tolower(guess[0]);
        guessed_letters += guess;
        guessed_letters += " ";

        // check if the guess is in the word
        bool found = false;
        for (unsigned int i = 0; i < word.length(); i++) {
            if (word[i] == guess[0]) {
                word_blanks[i*2] = guess[0];
                found = true;
            }
        }

        // increment misses if the guess was incorrect
        if (!found) {
            misses++;
        }

        // check if the word has been completely guessed
        bool complete = true;
        for (unsigned int i = 0; i < word_blanks.length(); i+=2) {
            if (word_blanks[i] == '_') {
                complete = false;
                break;
            }
        }

        if (complete) {
            cout << "Congratulations! You guessed the word: " << word << endl;
            break;
        }
    }

    // game over
    if (misses == 6) {
        display_man(misses);
        cout << "Misses: " << misses << "/6" << endl;
        cout << "Guessed Letters: " << guessed_letters << endl;
        cout << "The word was: " << word << endl;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return 0;
}

