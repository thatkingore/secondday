//
//  main.cpp
//  secondday
//
//  Created by Ore Daodu on 03/11/2022.
//

// Start of Template

// #include <iostream>

// int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
//    return 0;
//}
// End of Template

#include <iostream>

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
    
    return 0;
}

