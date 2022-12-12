//
//  objectfunctions.cpp
//  secondday
//
//  Created by Ore Daodu on 12/12/2022.
//

#include <iostream>
#include <cmath>

using namespace std;

class Student {
    public:
        string name;
        string course;
        double grade;
    
        Student(string aName, string aCourse, double aGrade) {
            name = aName;
            course = aCourse;
            grade = aGrade;
    }
    
    bool hasFirstClass(){
        if(grade >= 70){
            return true;
        }
        return false;
    }
};

int objectfunction()
{
    
    Student student1("Femi", "Psychology", 60);
    Student student2("Toyin", "Architecture", 90);
    
    cout << student1.hasFirstClass() << endl;
    
    return 0;
}
