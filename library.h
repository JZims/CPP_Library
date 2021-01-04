#ifndef LIBRARY_H_INCLUDED
#define LIBRARY_H_INCLUDED

#include "book.h"

class Library
    //c.) Library class created
{
    private:

        int maxAmountOfBooks;
        Book* books;
        //d.) Book type array books[5] created
        //a2) Redesigned 
      
    public:
        void addBook(Book);
        //e.) Method created that adds an existing book to the array
        Book getBook(int);
        //f.) Method created that returns a book requested from the array
        ~Library();
};


#endif  LIBRARY_H_INCLUDED
