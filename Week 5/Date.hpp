/******************
 * Name: John R Toth
 * Date: 2/6/15
 * Description: Date exercise, hpp file
 *****************/

//header file --> Fn declarations
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

#ifndef Date_H
#define Date_H

class Date {
public:
	//default constructor
	Date(); 
	//destructor fn
	~Date();

	//accessor fn for month
	int getMonth() const;

	//accessor fn for Day
	int getDay() const;

	//accessor fn for Year
	int getYear() const;	


	//mutator fn for Month
	void setMonth(int);

	//mutator fn for Day
	void setDay(int);

	//mutator fn for Year
	void setYear(int);

	//mutator fn for menu option 1
	int print1();	

	//mutator fn for menu option 2
	int print2();
	
	//mutator fn for menu option 3 
	int print3();

	//mutator fn for displayMenu
	void displayMenu();

	char getChoice(char);



private: 
	//member variables
	int newMonth;
	int newDay;
	int newYear;

};
#endif

