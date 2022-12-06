//
//  constructorfunctions.cpp
//  secondday
//
//  Created by Ore Daodu on 06/12/2022.
//

#include <iostream>
#include <cmath>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
    
        Book(string aTitle, string aAuthor, int aPages) {
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        
    }
};

int contructorfunction()
{
    
    Book book1("More Than You Know", "Michael J. Mauboussin", 332);
    Book book2("Lord of The Rings", "J. R. R. Tolkein", 700);
    
    cout << book1.author << endl;
    
    return 0;
}
