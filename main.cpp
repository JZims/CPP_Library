#include <iostream>
#include "library.h"
#include "book.h"

using namespace std;


int main()
{

    Book book1; // a.) Class called into main, book1 OBJECT initialized
    Library library; // g.) Library created in main function

    book1.author = "Josh Zimmerman";
    book1.title = "C++ course";
    book1.publicationYear = 2021;
    //b.) Fields of the book1 OBJECT, these correspond with the types 
    //specified in the class header file

    library.addBook(book1); 
    // h.) method from library.h called, accepting book1

    cout << "Author: " << library.getBook(0).author << "  ";
    cout << "Title: " << library.getBook(0).title << "  ";
    cout << "Publication Year: " << library.getBook(0).publicationYear << endl;
    // i.)    

    


    return 0;
}
