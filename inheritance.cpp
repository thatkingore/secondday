//
//  inheritance.cpp
//  secondday
//
//  Created by Ore Daodu on 12/12/2022.
//

#include <iostream>
#include <cmath>

using namespace std;

class Chef {
    public:
        void makeChicken(){
            cout << "The Chef is making chicken tonight." << endl;
        }
        void makeSalad(){
            cout << "The Chef is making salad tonight." << endl;
        }
        void makeSpecialDish(){
            cout << "The Chef is making BBQ ribs tonight." << endl;
        }
};

class ItalianChef : public Chef{
    public:
        void makePasta(){
            cout << "The Chef is making pasta tonight." << endl;
        }
        void makeSpecialDish(){
            cout << "The Chef is making chicken parm tonight." << endl;
        }
};

int inheritance()
{

    Chef chef;
    chef.makeChicken();
    chef.makeSpecialDish();
    
    ItalianChef italianChef;
    italianChef.makeChicken();
    italianChef.makeSpecialDish();
    
    return 0;
    
}
