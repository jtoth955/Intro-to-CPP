/************************************************************************************
*Filename: Patron.cpp
*Name: John R Toth
*Date: 3/9/15
*Description: Defines standard patron library information, including ID num, patron  
*name, books they've checked out and any fines they've encountered
*Input: addBook to cart & remove book from cart. 
*Output: book(s) removed from patron's cart, or added to it. 
************************************************************************************/

#include <iostream> 
#include <string> 

#include "Library.hpp"
#include "Patron.hpp"
#include "Book.hpp"

using namespace std;

//default constructor
Patron::Patron() {
	idNum = '0'; 
	name = '0';
}
//overload constructor
Patron::Patron(string idn, string n) {
	idNum = idn;
	name = n;
}
//accessor fn getIdNum
string Patron::getIdNum() {
	return idNum;
}
//accessor fn getName
string Patron::getName() {
	return name;
}
//accessor fn getCheckedOutBooks
vector<Book*> Patron::getCheckedOutBooks() {
	return checkedOutBooks;
}
//addBook fn adds Book titles to a library patrons profile
void Patron::addBook(Book* b) {

for(int i = 0; i < checkedOutBooks.size(); i++)
	{
	if(b->getIdCode() == checkedOutBooks[i]->getIdCode())
		{
			checkedOutBooks.push_back(b);
		}
	}
}
//removeBook fn removes book titles from a patrons profile
void Patron::removeBook(Book* b) {

for(int i = 0; i < checkedOutBooks.size(); i++)
	{
		if(b->getIdCode() == checkedOutBooks[i]->getIdCode())
		{
			checkedOutBooks.erase(checkedOutBooks.begin()+i);
		}
	}
}
//accessor fn getFineAmount
double Patron::getFineAmount() {
	return fineAmount;
}
//amendFine fn at param double, updates a library patrons
//library fines
void Patron::amendFine(double amount) {
	fineAmount = amount; 
}