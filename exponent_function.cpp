//
//  exponent_function.cpp
//  secondday
//
//  Created by Ore Daodu on 01/12/2022.
//

#include <iostream>
#include <cmath>

using namespace std;

int power(int baseNum, int powNum)
{
    int result = 1;
    for(int i = 0; i < powNum; i++) {
        result = result * baseNum;
    }
    
    return result;
}
int exponent_function()
{
    cout << power(2,3) << endl;
    
    return 0;
}
