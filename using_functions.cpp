//
//  using_functions.cpp
//  secondday
//
//  Created by Ore Daodu on 17/11/2022.
//

#include <iostream>
#include <cmath>

using namespace std;

// Using Functions

void sayHi(string name, int age) {
    cout << "Hi " << name << ", you are " << age << " years old.";
    
}

int using_functions() {
    
    sayHi("ore", 23);
    cout << endl;
    
    return 0;
}
