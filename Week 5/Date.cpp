/**********************
 * Name: John R Toth
 * Date: 2/6/15
 * Description: Date project, cpp files
 *********************/


#include "Date.hpp"

//default constructor
Date::Date() {
	newMonth = 1;
	newDay = 1;
	newYear = 2001;	

}
//destructor fn
Date::~Date() {

}
//accessor fn getMonth
int Date::getMonth() const {
 	return newMonth;
}
//accessor fn getDay
int Date::getDay() const {
	return newDay;
}
//accessor fn getYear
int Date::getYear() const {
	return newYear; 
}
//mutator fn setMonth
void Date::setMonth(int month) {
	if((month >= 1)&&(month <=12))
		newMonth = month;
	else
	{newMonth = 0;
	cout <<"Error, month selection is out of range";}

}
//mutator fn setDay
void Date::setDay(int day) {
	switch (day)
{
if (day > 0 && day < 32)
	case 1: //January
	case 3: //March
	case 5: //May
	case 7: //July
	case 8: //August
	case 10: //October
	case 12: //December
	//all above months have 31 days
	newDay = day;
	break;
if	(day > 0 && day < 29)
	case 2: //February
	newDay = day;
	break;
if 	(day > 0 && day <= 30)
	case 4: //March
	case 6: //June
	case 9: //September
	case 11: //November
	newDay = day;	
break;
default: newDay = 0;
	cout <<"Error, day selection is invalid";}
}
//mutator fn setYear
void Date::setYear(int year) {
	newYear = year;
}
//mutator fn that prints format 1
int Date::print1() {
	{cout << newMonth <<"/"<< newDay <<"/"<< newYear%100 << endl;}
}
//mutator fn that prints format 2
int Date::print2() {

	string alphMonth;
	switch(newMonth){
	case 1: alphMonth = "January";
		break;
	case 2: alphMonth = "February";
		break; 
	case 3: alphMonth = "March";
		break;
	case 4: alphMonth = "April";
		break;
	case 5: alphMonth = "May";
		break;
	case 6: alphMonth = "June";
		break;
	case 7: alphMonth = "July";
		break;
	case 8: alphMonth = "August";
		break; 
	case 9: alphMonth = "September"; 
		break; 
	case 10: alphMonth = "October";
		break;
	case 11: alphMonth = "November"; 
		break; 
	case 12: alphMonth = "December"; 
		break; 
	}
	cout << alphMonth <<" "<< newDay <<", "<< newYear << endl;
}
//mutator fn that prints format 3
int Date::print3() {
	
	string betMonth;
	switch(newMonth){
	case 1: betMonth = "January";
		break;
	case 2: betMonth = "February";
		break;
	case 3: betMonth = "March";
		break; 
	case 4: betMonth = "April"; 
		break; 
	case 5: betMonth = "May";
		break; 
	case 6: betMonth = "June";
		break; 
	case 7: betMonth = "July";
		break; 
	case 8: betMonth = "August"; 
		break; 
	case 9: betMonth = "September"; 
		break; 
	case 10: betMonth = "October"; 
		break; 
	case 11: betMonth = "November"; 
		break; 
	case 12: betMonth = "December"; 
		break; 
	}
	{cout << newDay <<" "<< betMonth <<" "<< newYear << endl;}
}
//captures user's selection from table
char getChoice(char max)
{
	char choice = cin.get();
//	cin.ignore();
	
	while ((choice < '1')||(choice > max))
	{
	cout << "Choice must be between 1 and " << max << ". ";
	choice =cin.get();
//	cin.ignore();
	}
return choice;
}
//builds table for options 1-4
void displayMenu()
{
	cout <<"\n\n		Menu\n\n";
	cout <<"1) Display the date format: x/xx/xx\n";
	
	cout <<"2) Display the date format: Month Day, Year\n";
	
	cout <<"3) Display the date format: Day Month Year\n";

	cout <<"4) Quit\n";
	cout <<"\nEnter your choice\n";
}
//main fn
int main()
{
	const char MAX_CHOICE = '4';
	char choice;
	int day;
	int month;
	int year; 

	cout <<"Enter a day:\n";
	cin  >>day;
	cout <<"Enter a month:\n";
	cin  >>month; 
	cout <<"Enter a year:\n";
	cin  >>year;

	//set user input to mutator fns
Date someDate;
	someDate.setDay(day);
	someDate.setMonth(month);
	someDate.setYear(year);

cout << fixed << setprecision(2);
do 
{
	displayMenu();
	//returns only options 1-4
	choice = getChoice(MAX_CHOICE);
	switch(choice)
	{
		case '1': cout <<someDate.print1()<<endl;
		break;
		case '2': cout <<someDate.print2()<<endl;
		break;
		case '3': cout <<someDate.print3()<<endl;
		break;
		case '4': cout <<"Quit"<<endl;
		break;
	}
}	while(choice !='4');

return 0;
}

