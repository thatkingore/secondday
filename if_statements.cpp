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

int moreMax(int num1, int num2, int num3) {
    
    int result;
    
    if(num1 >= num2 && num1 >= num3) {
        result = num1;
    } else if(num2 >= num1 && num2 >= num3) {
        result = num2;
    } else {
        result = num3;
    }
    
    return result;
}

int if_statements() {
    
    cout << "The maximum number is " << getMax(2, 5) << endl;
    cout << "The maximum number is " << moreMax(2, 8, 5) << endl;
    
    bool isMale = true;
    bool isTall = false;
    if(isMale && isTall){
        cout << "You are male" << endl;
    } else {
        cout << "You are not male" << endl;
    }
    
    return 0;
}
