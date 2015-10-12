/***********************************************************************************
*Filename: Library.cpp
*Name: John R Toth
*Date: 3/9/15
*Description: Defines a library object, for a standard library, including add member,
*add book, checkout book, return book, request book, pay fine, view patron info, 
*and specific book info, such as title, author and ID Num
*Input: Book ID, author, title, member ID, member name and payment of fines.
*Output: Prompts for Book ID, Author, Title, current location, Member ID and Name, 
*Fine payment and error messages for incorrect inputs
************************************************************************************/
#include <iostream> 
#include <string> 

#include "Library.hpp"
#include "Patron.hpp"
#include "Book.hpp"

using namespace std;

//default constructor
Library::Library() {
	currentDate = 0; 
	members.reserve(100);
	holdings.reserve(100);
}
//Book vector, takes user input to construct a Book object 
void Library::addBook() {
	string code, titleLib, authorLib;
	cout << "Please enther the ID code for the book: " << endl;
	cin  >> code; 
	cin.ignore(); 
	cout << "Please enter the title of the book: " << endl; 
	getline(cin, titleLib);
	cout << "Please enter the author of the book: " << endl;
	getline(cin, authorLib);

	Book newBook(code, titleLib, authorLib);
	holdings.push_back(newBook);
}
//Patron vector, takes user input to construct a Patron object
void Library::addMember() {
	string id, name;
	cin.ignore();
	cout <<"Enter an ID number: " << endl; 
	getline(cin, id);
	cout <<"Enter your name: " << endl;
	getline(cin, name);

	Patron Patron(id, name);
	members.push_back(Patron);
}
//checkOutBook fn that takes string params to determine whether a title exists, it's current
//location and updates patron and book objects when the title is checked out
void Library::checkOutBook(string patronID, string bookID) {
	
	for(int i = 0; i < members.size(); i++)
	{
		if(patronID == members[i].getIdNum())
		{
	for(int x = 0; x < holdings.size(); x++)
		{
		if(bookID == holdings[x].getIdCode())
		{	
			if(holdings[x].Book::getLocation() == ON_SHELF)
			{
			cout << holdings[x].Book::getTitle() << " has been checked out by "
				 << members[i].Patron::getName() << endl;
			
			members[i].Patron::addBook(&holdings[x]);
			holdings[x].Book::setCheckedOutBy(&members[i]);
			holdings[x].Book::setLocation(CHECKED_OUT);
			holdings[x].Book::setDateCheckedOut(currentDate);		
			}
		else if(holdings[x].Book::getLocation() == CHECKED_OUT)
			{
			cout << "Sorry, " << holdings[x].Book::getTitle() << " is currently checked out." << endl;
			}
		else if(holdings[x].Book::getLocation() == ON_HOLD_SHELF)
			{
				if(members[i].Patron::getName() == holdings[x].Book::getRequestedBy()->getName())
				{
				cout << holdings[x].Book::getTitle() << " has been checked out by "
					 << members[i].Patron::getName() << endl;
				members[i].Patron::addBook(&holdings[x]);
				holdings[x].Book::setCheckedOutBy(&members[i]);
				holdings[x].Book::setLocation(CHECKED_OUT);
				holdings[x].Book::setDateCheckedOut(currentDate);
				}
				else
				{
				cout << "Sorry, " << holdings[x].Book::getTitle() << " is currently on hold for another patron." << endl;
				}
			}
		return;
		}			
		}
		}
	}				
//if either book ID or Patron ID was input incorrectly, the following message will display
cout << "Sorry, invalid library ID or Book ID number. " << endl;
}
//returnBook fn that that takes a string parameter, determines if a particular title exists, 
//it's current location and if found, updates the location of the title.
void Library::returnBook(string bookID) {
	for(int i = 0; i < holdings.size(); i++)
	{
		if(bookID == holdings[i].getIdCode())
		{
			if(holdings[i].Book::getLocation() == ON_SHELF)
			{
				cout << holdings[i].Book::getTitle() << " is not currently checked out." << endl;
			}
			else 
			{
			holdings[i].Book::setLocation(ON_SHELF);
			cout << holdings[i].Book::getTitle() << " " << "has been returned." << endl;
			}
		return;
		}	
	}
//if Book ID was not input properly, the following message will show
cout << "Book ID invalid." <<endl;
}
//requestBook function that takes string parameters to determine if a particular book title exists, 
//the title's current location, and updates the user on a particular title's availability and if they 
//are able to check it out.
void Library::requestBook(string patronID, string bookID) {
  
  string response;

	for(int i = 0; i < holdings.size(); i++)
	{
		if(bookID == holdings[i].getIdCode())
		{	
	for(int x = 0; x < members.size(); x++)
	{
		if(patronID == members[x].getIdNum())
		{
			if(holdings[i].Book::getLocation() == ON_SHELF)
			{
				cout << "This book is currently on the shelf" << endl;
				cout << "Would you like to place the book on hold? (Yes/No)" << endl;
				
					getline(cin, response);	
					if((response == "yes") || (response == "Yes"))
					{
						holdings[i].Book::setLocation(ON_HOLD_SHELF);
						holdings[i].setRequestedBy(&members[i]);
						cout << holdings[i].Book::getTitle() <<" is on request for " << members[i].Patron::getName() << endl;
						return;
					}
					else{
						cout << "Ok, have a nice day" << endl;
						return;
					}
			}
				else if (holdings[i].Book::getLocation() == ON_HOLD_SHELF)
				{
					cout << "Sorry, this book is currently on hold for another patron."; 
				}
				else
					cout << "Sorry, this book is currently checked out"; 
				return;
				}
			}
		}
	}
//if either book ID or Patron ID was input incorrectly, the following message will display
cout << "Sorry, invalid library ID or Book ID number. " << endl;
}
//incrementCurrentDate fn that artificially increments time
void Library::incrementCurrentDate() {
	
	currentDate += 1;
	cout << "Today is day number: " << currentDate << " in your rental period. " << endl;
	cout << "You have: " << Book::CHECK_OUT_LENGTH - currentDate << " days until you incur fines. " << endl;
}
//payFine function accepts a string and double parameter to update a library patron's fines
void Library::payFine(string patronID, double payment) {
	
	for(int i = 0; i < members.size(); i++)
	{
		if(patronID == members[i].getIdNum())
		{
		members[i].amendFine(payment);
		cout << members[i].getName() << ", Your new balance is: $" << members[i].getFineAmount() << " " << endl; 		
		return;
		}
	}
	//if loop does not find a user with that ID, message will display
	cout << "That is not a valid user ID. " << endl;
}
//viewPatronInfo function accepts a string parameter to display the specifics of a particular patron object
void Library::viewPatronInfo(string patronID) {
	
	for(int i = 0; i < members.size(); i++)	
	{
		if(patronID == members[i].getIdNum())
		{
		cout << "\nLibrary ID number: " << members[i].getIdNum() << endl;
		cout << "Cardholder name: " << members[i].getName() << endl;
		cout << "Titles of previously checked out books: " << holdings[i].getCheckedOutBy()->getName() << endl;
		cout << "Current fines: " << members[i].getFineAmount() << endl;
		return;
		}
	}
	//if loop does not find a user with that ID, message will display
	cout << "That is not a valid user ID." << endl;
}
//viewBookInfo function accepts a string parameter to display the specifics about a particular library object
void Library::viewBookInfo(string bookID) {

	for(int i = 0; i < holdings.size(); i++)
	{
		if(bookID == holdings[i].getIdCode()){
		cout << "\nBook ID Code: " << holdings[i].getIdCode() << endl;
		cout << "Title: " << holdings[i].getTitle() << endl;
		cout << "Author: " << holdings[i].getAuthor() << endl;
			if(holdings[i].Book::getLocation() == ON_SHELF)
			{
				cout << "This book is currently on the shelf" << endl;
			}
			else if (holdings[i].Book::getLocation() == ON_HOLD_SHELF)
			{
				cout << holdings[i].getRequestedBy()->getName() << " currently has this title on hold" << endl; 
			}
			else
			{
				cout << "This book is currently checked out" << endl; 
				cout << holdings[i].getCheckedOutBy()->getName() << " currently has has this title checked out." << endl;
				cout << holdings[i].Book::getTitle() << " is due back in " 
					 << 21 - holdings[i].Book::getDateCheckedOut() << " days." << endl;
			}
			return;		
		}
	}
	//if loop does not find the book ID, the following message will display
	cout << "Sorry, that book is not currently in our circulation." << endl;
}

