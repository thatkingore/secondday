//
//  Created by Ore Daodu on 03/11/2022.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Hi Hi!" << endl;
    cout << "\n" << endl;
    cout << "         ^" << endl;
    cout << "        /|" << endl;
    cout << "       / |" << endl;
    cout << "      /  |" << endl;
    cout << "     /   |" << endl;
    cout << "    /    |" << endl;
    cout << "   /     |" << endl;
    cout << "  /      |" << endl;
    cout << " /_______|" << endl;
    cout << "\n\n" << endl;
   
    string characterName = "John";
    int characterAge;
    characterAge = 35;
    cout << "There was once a man named " << characterName << endl;
    cout << "He was " << characterAge << " years old" << endl;
    cout << "He liked the name " << characterName << endl;
    cout << "But did not like being " << characterAge << endl;
    cout << "\n\n";
    
    char grade = 'A';
    string phase = "Data Types";
    int age = 7;
    double unlimited_decimal_points = 5.3232342342;
    float limited = 3.4;
    bool is_male = false;
    cout << phrase << " is the topic. For my final exam, I got an " << grade << ". I am " << age << " years old." << endl;
    cout << unlimited_decimal_points << " is a random number I came up with." << endl;
    cout << "\n\n";
    
    cout << phrase.length() << endl;
    cout << phrase.find("Data", 0) << endl;
    string phrasesub;
    phrasesub = phrase.substr(5, 5);
    cout << phrasesub << endl;
    cout << "\n\n";
    
    // Numbers
    cout << 4 << endl;
    cout << 4 + 5 << endl;
    cout << 4 - 5 << endl;
    cout << 4 * 5 << endl;
    cout << 4 / 5 << endl;
    cout << 4 % 5 << endl;
    
    int wnum = 4;
    wnum++;
    wnum += 3;
    cout << wnum << endl;
    
    cout << pow(4,5) << endl;
    cout << sqrt(22) << endl;
    cout << round(sqrt(22)) << endl;
    cout << ceil(sqrt(22)) << endl;
    cout << floor(sqrt(22)) << endl;
    
    // Basic Calculator
    double num1, num2;
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Another number: ";
    cin >> num2;
    cout << num1 + num2 << endl;
    
    // Mad Lib Game
    string colour, pluralnoun, celeb;
    
    cout << "What is your favourite colour: ";
    getline (cin, colour);
    cout << "And the plural form of a word: ";
    getline (cin, pluralnoun);
    cout << "Who is your favourite person: ";
    getline (cin, celeb);
    
    cout << "Roses are " << colour << endl;
    cout << pluralnoun << " are blue" << endl;
    cout << "I love " << celeb << endl;
    
    return 0;
}

