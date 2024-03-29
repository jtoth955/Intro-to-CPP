/**************************************************************
*Filename: Patron.hpp
*Name: John R Toth
*Date: 3/9/15
*Description: Header definition for library patron information 
**************************************************************/

#ifndef PATRON_HPP
#define PATRON_HPP
#include "Library.hpp"
#include "Book.hpp"
#include <string>
#include <vector>

class Book;  // forward declaration

class Patron
{
private:
    std::string idNum;
    std::string name;
    std::vector<Book*> checkedOutBooks;
    double fineAmount;
public:
    Patron();
    Patron(std::string idn, std::string n);
    std::string getIdNum();
    std::string getName();
    std::vector<Book*> getCheckedOutBooks();
    void addBook(Book* b);
    void removeBook(Book* b);
    double getFineAmount();
    void amendFine(double amount);
};

#endif