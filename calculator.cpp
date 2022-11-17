//
//  calculator.cpp
//  secondday
//
//  Created by Ore Daodu on 17/11/2022.
//

#include <iostream>
#include <cmath>

using namespace std;


int calculator()
{
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
    cout << "\n";
    
    // Basic Calculator
    double num1, num2;
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Another number: ";
    cin >> num2;
    cout << num1 + num2 << endl;
    cout << "\n\n";
    
    return 0;
    
}
