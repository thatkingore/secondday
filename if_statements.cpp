//
//  if_statements.cpp
//  secondday
//
//  Created by Ore Daodu on 19/11/2022.
//

#include <iostream>
#include <cmath>

using namespace std;

int getMax(int num1, int num2) {
    
    int result;
    
    if(num1 > num2) {
        result = num1;
    } else {
        result = num2;
    }
    
    return result;
}

int if_statements() {
    
    cout << "The maximum number is " << getMax(2, 5) << endl; 
    
    bool isMale = true;
    bool isTall = false;
    if(isMale && isTall){
        cout << "You are male" << endl;
    } else {
        cout << "You are not male" << endl;
    }
    
    return 0;
}
