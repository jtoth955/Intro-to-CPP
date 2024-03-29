/*******************************************************************
*Filename: Book.hpp
*Name: John R Toth
*Date: 3/9/15
*Description: Header definition for a library book and it's location
*******************************************************************/

#ifndef BOOK_HPP
#define BOOK_HPP
#include "Library.hpp"
#include "Patron.hpp"

#include <string>

class Patron;  // forward declaration


// These three locations are mutually exclusive, but note that
// a Book can be on request for a Patron while being checked
// out to another Patron.  In that case the Book's location is
// CHECKED_OUT, and when it is returned, it's location will
// become ON_HOLD_SHELF.
enum Locale {ON_SHELF, ON_HOLD_SHELF, CHECKED_OUT};


class Book
{
private:
    std::string idCode;
    std::string title;
    std::string author;
    Locale location;
    Patron* checkedOutBy;
    Patron* requestedBy;
    int dateCheckedOut;
public:
    static const int CHECK_OUT_LENGTH = 21;
    Book();
    Book(std::string idc, std::string t, std::string a);
    std::string getIdCode();
    std::string getTitle();
    std::string getAuthor();
    Locale getLocation();
    void setLocation(Locale lo);
    Patron* getCheckedOutBy();
    void setCheckedOutBy(Patron* p);
    Patron* getRequestedBy();
    void setRequestedBy(Patron* p);
    int getDateCheckedOut();
    void setDateCheckedOut(int d);
};

#endif