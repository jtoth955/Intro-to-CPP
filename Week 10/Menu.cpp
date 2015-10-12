/*******************************************************
*Name: John R Toth
*Date: 3/9/15
*Description: Library project, main fn. 
*******************************************************/

#include <iostream> 
#include <string> 

#include "Library.hpp"
#include "Patron.hpp"
#include "Book.hpp"
#include "LIBRARY.CPP"
#include "PATRON.CPP"
#include "BOOK.CPP"

using namespace std;

/*********************************************************************************
*Main fn 
*displays do-while loop menu  
*********************************************************************************/
int main() 
{	int choice; 

	string num, bookID, libID; 
	double pay;

	//object declarations
	Library libraryObject;
	Patron patronObject;
	Book bookObject;


	do {


	//Display the menu and get the user's choice
	cout << "\n                         Welcome to the Library                           \n\n";
	cout << "1. Add Book\n"; 
	cout << "2. Add Member\n";
	cout << "3. Checkout Book\n"; 
	cout << "4. Return Book\n";
	cout << "5. Request Book\n";
	cout << "6. Pay Library Fine\n";
	cout << "7. Increment Current Date\n"; 
	cout << "8. View Patron Information\n";
	cout << "9. View Book Information\n";
	cout << "10. Quit\n";
	cin  >> choice;


	//use the menu selection to execute the correct set of actions
			if(choice == 1)
			//add book
			{
				libraryObject.addBook();
			}
			else if(choice == 2)
			//add library member
			{
				libraryObject.addMember(); 
			}
			else if(choice == 3)
			//checkout book 
			{
				cin.ignore();
				cout << "Enter your Library ID: " << endl;
				getline(cin, libID);
				cout << "Enter the book ID: " << endl;
				getline(cin, bookID);
				libraryObject.checkOutBook(libID, bookID);
			}
			else if(choice == 4)
			//return book
			{
				cin.ignore();
				cout << "Enter the ID for the book you are returning: " << endl;
				getline(cin, bookID);
				libraryObject.returnBook(bookID);
			}
			else if(choice == 5)
			//request book
			{
				cin.ignore();
				cout << "Enter your Library ID: " << endl;
				getline(cin, libID);
				cout << "Enter the book ID: " << endl;
				getline(cin, bookID);
				libraryObject.requestBook(libID, bookID);
			}
			else if(choice == 6)
			//pay library fine
			{
				cin.ignore();
				cout << "Enter your ID: " << endl;
				getline(cin, num);
				cout << "Enter the amount you would like to pay: " << endl;
				cin  >> pay;
				libraryObject.payFine(num, pay);
			}
			else if(choice == 7)
			//increment current date
			{
				libraryObject.incrementCurrentDate();
			}
			else if(choice == 8)
			//view patron info
			{ 
				cin.ignore();
				cout << "Enter an ID: "<< endl;
				getline(cin, libID);
				libraryObject.viewPatronInfo(libID);
			}
			else if(choice == 9)
			//view book info
			{
				cin.ignore();
				cout << "Enter book ID: "<< endl;
				getline(cin, bookID);
				libraryObject.viewBookInfo(bookID);
			}
			else if(choice > 13)
			{
				cout <<"\nThe valid choices are 1 - 10.\n" << endl;
			}
	}while(choice !=10);

return 0;
}