//
//  creatingaclass.cpp
//  secondday
//
//  Created by Ore Daodu on 05/12/2022.
//

#include <iostream>
#include <cmath>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
};

int creatingaclass()
{
    
    Book book1;
    book1.title = "More Than You Know";
    book1.author = "Michael J. Mauboussin";
    book1.pages = 332;
    
    Book book2;
    book2.title = "Lord of The Rings";
    book2.author = "J. R. R. Tolkein";
    book2.pages = 700;
    
    cout << book1.author << endl;
    
    return 0;
}
