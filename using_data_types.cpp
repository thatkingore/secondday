//
//  using_data_types.cpp
//  secondday
//
//  Created by Ore Daodu on 17/11/2022.
//

#include <iostream>
#include <cmath>

using namespace std;

// Data Types

int data_types()
{
    char grade = 'A';
    string phrase = "Data Types";
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
    
    return 0;
    
}

