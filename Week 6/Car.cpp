/************************
 * Name: John R Toth
 * Date: 2/9/15
 * Description: Car exercise, cpp file
 ***********************/

#include <iostream>
#include <string>

#include "Car.hpp"
using namespace std;

//default constructor
Car::Car() {
	Year = 0;
	Make = "";
	newSpeed = 0;
}
//destructor fn
Car::~Car() {

}
//accessor fn 'getSpeed'
int Car::getSpeed()  {
	return newSpeed;
}
//mutator fn, member variable newYear gets changed to the input variable,
//'year'
void Car::setYear(int Year) {
//	newYear = year;
}
//mutator fn, member variable newMake gets changed to the input variable, 
//'make'
void Car::setMake(string Make) {
	
}
//member fn 'accelerate', increases speed by 10 each time it is run
void Car::Accelerate() {
	if(newSpeed < 80)
	{	newSpeed +=10;}
	else
	{	newSpeed = 80;
		cout <<"You've hit the limitor of 80 MPH! Brake! ";}
}
void Car::setSpeed(int speed) {
	newSpeed = speed;
}
//member fn 'brake', decreases speed by 10 each time it is run
void Car::Brake() {
	if(newSpeed > 0)	
	{	newSpeed -=10;}
	else
	{	newSpeed = 0;
	cout <<"You can't go less than 0 MPH! Accelerate! ";}
}	
//captures selection from option 1-3
char getChoice(char max)
{
	char choice = cin.get();
	while ((choice < '1')||(choice > max))
	{	choice = cin.get();
	}	
return choice;
}
//builds table for options 1-3
void displayMenu() 
{
	cout <<"1. Accelerate\n";
	cout <<"2. Brake\n";
	cout <<"3. Quit\n";
} 

/*********************************************
 *		   Main fn 		     *
 *					     *
 ********************************************/
int main()
{
	int year;
	string make;
	const char MAX_CHOICE = '3';
	char choice;
	int speed;

	cout <<"What is the year of the vehicle?\n";
	cin  >>year;
	cout <<"What is the make of the vehicle?\n";
	cin  >>make;
	cout <<"What is the current speed the vehicle is traveling?\n";
	cin >>speed;

Car Specs;

Specs.setYear(year);
Specs.setMake(make);
Specs.setSpeed(speed);

do{
	
	cout <<"\nMake a selection for what you would like to do next:\n";

	displayMenu();

	//returns options, 1, 2, or 3.
	choice = getChoice(MAX_CHOICE);
	switch(choice)
		{	
		case '1': Specs.Accelerate(); cout<<"Your vehicle is traveling: "
			<<Specs.getSpeed()<<" MPH."<< endl;
		break;
		case '2': Specs.Brake(); cout<<"Your vehicle is traveling: "
			<<Specs.getSpeed()<<" MPH."<<endl;
		break;
		case '3':
		break;	
		}


	}while(choice!='3');

return 0;
} 
