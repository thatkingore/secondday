//
//  variable.cpp
//  secondday
//
//  Created by Ore Daodu on 04/11/2022.
//

#include <iostream>
#include <cmath>

using namespace std;

double cube (double num) {
    double result = num * num * num;
    return result;
}

int variable()
{
    // Using Return in Two Ways
    double answer = cube (5.0);
    cout << answer;
    
    return 0;
}

