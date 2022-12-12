//
//  gettersandsetters.cpp
//  secondday
//
//  Created by Ore Daodu on 12/12/2022.
//

#include <iostream>
#include <cmath>

using namespace std;

class Movie {
    public:
        string title;
        string director;
        string rating;
    
        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            rating = aRating;
        }
    
        void setRating(string aRating){
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
                
                rating = aRating;
                
            } else {
                
                rating = "NR";
                
            }
    }
    
    string getRating(){
        
        return rating;
        
    }
};

int gettersandsetters()
{
    
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");
    
    avengers.setRating("Dog");
    
    cout << avengers.rating << endl;
    
    return 0;
}
