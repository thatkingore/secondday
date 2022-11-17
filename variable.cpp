//
//  variable.cpp
//  secondday
//
//  Created by Ore Daodu on 04/11/2022.
//

#include <iostream>
#include <cmath>

using namespace std;

// Using Return in Two Ways

double cube (double num) {
    double result = num * num * num;
    return result;
}

int using_return()
{
//  Way 1
    double answer = cube (5.0);
    cout << answer;
    
//  Way 2
//  cout << cube (5.0);
    
    return 0;
}

