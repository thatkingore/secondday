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
// Pointer Variable
    int *pAge = &age;
    double *pgpa = &gpa;
    double gpa = 80;
    string name = "Joy";
    string *pname = &name;
    
    cout << pAge << endl;
// Dereferencing Pointer
    cout << *pAge << endl;
//  cout << *&gpa << endl;
    cout << "Age: " << &age << endl;
    cout << "GPA: " << &gpa << endl;
    cout << "Name: " << &name << endl;
    cout << "\n\n" << endl;
    
    return 0;
}
