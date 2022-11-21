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
    
    // Better Calculator
    char op;
    
    cout << "Enter a number: " << endl;
    cin >> num1;
    cout << "Enter an operator: " << endl;
    cin >> op;
    cout << "And another number: " << endl;
    cin >> num2;
    
    int result;
    
    if(op == '+') {
        result = num1 + num2;
    } else if(op == '-') {
        result = num1 - num2;
    } else if(op == '/') {
        result = num1 / num2;
    } else if(op == '*') {
        result = num1 * num2;
    } else {
        cout << "Invalid operator" << endl;
    }
    
    cout << result;
    cout << "\n" << endl;
    
    return 0;
    
}
