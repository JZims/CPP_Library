#include <iostream>
#include "library.h"
#include "book.h"

using namespace std;


int main()
{

    Book books; // a.) Class called into main, book1 OBJECT initialized
    Library library; // g.) Library created in main function

    books.author = "Josh Zimmerman";
    books.title = "C++ course";
    books.publicationYear = 2021;
    //b.) Fields of the book1 OBJECT, these correspond with the types 
    //specified in the class header file

    library.addBook(books); 
    // h.) method from library.h called, accepting book1

    cout << "Author: " << library.getBook(0).author << "  ";
    cout << "Title: " << library.getBook(0).title << "  ";
    cout << "Publication Year: " << library.getBook(0).publicationYear << endl;
    // i.) getBook method invoked for each parameter

   

    return 0;
}
