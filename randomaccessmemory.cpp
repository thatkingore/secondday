//
//  randomaccessmemory.cpp
//  secondday
//
//  Created by Ore Daodu on 04/12/2022.
//

#include <iostream>
#include <cmath>

using namespace std;

int pointers()
{
    int age = 23;
    double gpa = 80;
    string name = "Joy";
    
    cout << "Age: " << &age << endl;
    cout << "GPA: " << &gpa << endl;
    cout << "Name: " << &name << endl;
    cout << "\n\n" << endl;
    
    return 0;
}
