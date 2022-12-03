//
//  basicallyamatrix.cpp
//  secondday
//
//  Created by Ore Daodu on 03/12/2022.
//

#include <iostream>
#include <cmath>

using namespace std;

int basicallyamatrix()
{
    int numberGrid[3][2] {
                            {1, 2},
                            {3, 4},
                            {5, 6},
                         };
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cout << numberGrid[i][j];
        }
        
        cout << endl;
    }
    
    return 0;
}
