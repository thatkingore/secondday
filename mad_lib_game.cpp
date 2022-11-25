//
//  mad_lib_game.cpp
//  secondday
//
//  Created by Ore Daodu on 17/11/2022.
//

#include <iostream>
#include <cmath>

using namespace std;

// Mad Lib Game

int mad_lib_game()
{
    
    string colour, pluralnoun, celeb;
    
    cout << "What is your favourite colour: ";
    cin >> colour;
    cout << "And the plural form of a word: ";
    cin >> pluralnoun;
    cout << "Who is your favourite person: ";
    cin >> celeb;
    
    //  cout << "What is your favourite colour: ";
    //  getline(cin, colour);
    //  cout << "And the plural form of a word: ";
    //  getline(cin, pluralnoun);
    //  cout << "Who is your favourite person: ";
    //  getline(cin, celeb);
    
    cout << "Roses are " << colour << endl;
    cout << pluralnoun << " are blue" << endl;
    cout << "I love " << celeb << endl;
    cout << "\n";
    
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool OutOfGuesses = false;
    
    while(secretNum != guess) {
        if(guessCount < guessLimit) {
            cout << "Enter guess: " << endl;
            cin >> guess;
            guessCount++;
        } else {
            OutOfGuesses = true;
          }
    }
    
    if(OutOfGuesses) {
        cout << "Sorry!" << endl;
    } else {
        cout << "You Win!" << endl;
      }
    
    return 0;
    
}
