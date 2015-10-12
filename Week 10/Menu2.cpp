/***********************************************************************************
*Filename: Menu.cpp
*Name: John R Toth
*Date: 3/9/15
*Description: Defines a menu object for a standard library. Details include 10 menu
*options for a user to choose from. Menu is encased in a Do-while loop 
*Input: User selection from options 1-10
*Output: Displays 10 menu options, each relevant to standard library encounters, as 
*well as an exit to quit the program. 
***********************************************************************************/

#include <iostream> 
#include <string> 

#include "LIBRARY.HPP"
#include "PATRON.HPP"
#include "BOOK.HPP"
#include "LIBRARY.CPP"
#include "PATRON.CPP"
#include "BOOK.CPP"

using namespace std; 


//member fn displayMenu, builds library menu
void displayMenu()
{
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
}

/*********************************************************************************
*Description: Main fn, obtains the direction the user would like to navigate, based 
*on what they need to do at the library, or quit to exit.
*Parameters: The users choice, book ID, member ID and the amount they want to apply 
*towards library fines.
*********************************************************************************/

int main()
{
int choice; 
const int MAX_CHOICE = 10;
string num, bookID, libID; 
double pay;
bool quit = false;

	//object declarations
	Library libraryObject;
	Patron patronObject;
	Book bookObject;
	
	do {
		cout << "\n\n                        *** Welcome to the library ***                         "<<endl;
		
		cout << "\nEnter a selection:\n" << endl;
		
		displayMenu();
		switch(choice)
		{
			case 1: //add book
			{
				libraryObject.addBook();
			}
			break;
			
			case 2: //add library member
			{
				libraryObject.addMember(); 

			}
			break; 
			
			case 3: //checkout book
			{
				cout << "Enter your Library ID: " << endl;
				getline(cin, libID);
				cout << "Enter the book ID: " << endl;
				getline(cin, bookID);
				libraryObject.checkOutBook(libID, bookID);
			}
			break; 
			
			case 4: //return book
			{
				cout << "Enter the ID for the book you are returning: " << endl;
				getline(cin, bookID);
				libraryObject.returnBook(bookID);
			}
			break; 
			
			case 5: //request book
			{
				cout << "Enter your Library ID: " << endl;
				getline(cin, libID);
				cout << "Enter the book ID: " << endl;
				getline(cin, bookID);
				libraryObject.requestBook(libID, bookID);
			}
			break; 
			
			case 6: //pay library fine
			{
				cout << "Enter your ID: " << endl;
				getline(cin, num);
				cout << "Enter the amount you would like to pay: " << endl;
				cin  >> pay;
				libraryObject.payFine(num, pay);
			}
			break;
			
			case 7: //increment current date
			{
				libraryObject.incrementCurrentDate();
			}
			break; 
			
			case 8: //view patron info
			{ 
				cout << "Enter an ID: "<< endl;
				getline(cin, libID);
				libraryObject.viewPatronInfo(libID);
			}
			break; 
			
			case 9: //view book info
			{
				cout << "Enter book ID: "<< endl;
				getline(cin, bookID);
				libraryObject.viewBookInfo(bookID);
			}
			break; 

			case 10: //Quit
				quit = true;
			break;
			default:
				cout << "Enter a value between 1-10" << endl;
			}
	if(choice > 10)
	{
	cout << "\nPlease choose between 1 - 10." << endl;
	}		
	
	cin  >> choice; 
	
} while(choice != 10);
return 0;
}