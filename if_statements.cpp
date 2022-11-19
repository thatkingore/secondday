//
//  if_statements.cpp
//  secondday
//
//  Created by Ore Daodu on 19/11/2022.
//

#include <iostream>
#include <cmath>

using namespace std;


int if_statements()
{
    
    bool isMale = true;
    bool isTall = false;
    if(isMale && isTall){
        cout << "You are male" << endl;
    } else {
        cout << "You are not male" << endl;
    }
    
    return 0;
}
