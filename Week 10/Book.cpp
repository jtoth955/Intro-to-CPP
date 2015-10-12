/************************************************************************************
*Filename: Book.cpp
*Name: John R Toth
*Date: 3/9/15
*Description: Defines a Book object for a standard library, including book author
*ID codes, titles and if as well as when the title has been checked out by a patron.  
*Input: None
*Output: None
************************************************************************************/

#include <iostream> 
#include <string> 

#include "Library.hpp"
#include "Patron.hpp"
#include "Book.hpp"


using namespace std;

//default constructor
Book::Book() {
	checkedOutBy = NULL;
	requestedBy = NULL;
}
//overload constructor
Book::Book(string idc, string t, string a) {
	idCode = idc;
	title = t; 
	author = a; 
	checkedOutBy = NULL;
	requestedBy = NULL;
	location = ON_SHELF;
}
//accessor fn getIdCode
string Book::getIdCode() {
	return idCode;
}
//accessor fn getTitle
string Book::getTitle() {
	return title;
}
//accessor fn getAuthor
string Book::getAuthor() {
	return author; 
}
//accessor fn getLocation
Locale Book::getLocation() {
	return location;
}
//member variable location gets changed to input parameter lo
void Book::setLocation(Locale lo) {
	location = lo;
}
//accessor fn checkedOutBy
Patron* Book::getCheckedOutBy() {
	return checkedOutBy;
}
//member varibale checkedOutBy gets changed to input parameter, p
void Book::setCheckedOutBy(Patron* p) {
	checkedOutBy = p;
}
//accessor fn getRequestedBy
Patron* Book::getRequestedBy() {
	return requestedBy;
}
//member variable requestedBy gets changed to input parameter, p
void Book::setRequestedBy(Patron* p) {
	requestedBy = p;
}
//accessor fn getDateCheckedOut
int Book::getDateCheckedOut() {
	return dateCheckedOut;
}
//member variable dateCheckedOut gets changed to input parameter, d
void Book::setDateCheckedOut(int d) {
	dateCheckedOut = d;
}



