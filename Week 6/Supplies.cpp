/****************************
 * Name: John R Toth
 * Date: 2/10/15
 * Description: Supplies exercise, cpp file
 ***************************/
#include <string>
#include <iostream>
#include "Supplies.hpp"


using namespace std; 

//default constructor
Supplies::Supplies() {
	setNumThingamajigs(100);
	setNumWatchamacallits(70);
	setNumFramistats(50);
}
//destructor
Supplies::~Supplies() {
}
//mutator fn, setting value of thinamajigs from user input
void Supplies::setNumThingamajigs(int thingama) {
	newThingama = thingama;
} 
//mutator fn, setting value of watchamacallits from user input 
void Supplies::setNumWatchamacallits(int watchama) {
	newWatchama = watchama;
}
//mutator fn, setting value of framistas from user input
void Supplies::setNumFramistats(int framas) {
	newFramas = framas;
}
//fn to produce thing 1
void Supplies::producething1(int buildUnits) {
	newThingama -=buildUnits;
	newWatchama -=buildUnits*2;
	newFramas -=buildUnits;
}
//fn to produce thing 2
void Supplies::producething2(int buildUnits) {
	newThingama -=buildUnits*2;
	newFramas -=buildUnits; 
}	
//fn that prints number of parts to order, to return values to default levels
void Supplies::printPartsOrder() {
	cout <<"Number of Thingamajig's to order: "<< 100 - newThingama << endl
		<<"Number of Watchamacallit's to order: "<< 70 - newWatchama
		<< endl <<"Number of Framistat's to order: "<< 50 - newFramas
		<< endl;
	if(newThingama < 100)
		{	newThingama = 100;}
	if(newWatchama < 70)
		{ 	newWatchama = 70;}
	if(newFramas < 50)
		{	newFramas = 50;}
}
//loop that captures users 'choice' selection from options 1-4
char getChoice(char max)
{
	char choice = cin.get();
	while ((choice <'1')||(choice > max))
	{	choice = cin.get();
	}
return choice;
}
//builds table for options 1-4
void displayMenu()
{	
	cout <<"1. Produce thing 1\n";
	cout <<"2. Produce thing 2\n";
	cout <<"3. Print a parts order\n";
	cout <<"4. Quit \n";
} 
/*************************************************************
 *			    Main			     *
 *			     Fn				     *	
 ************************************************************/
int main()
{
	int buildUnits;
	int thingama;
	int watchama;
	int framas;
	const char MAX_CHOICE = '4';
	char choice;	

	cout <<"How many Thingamajigs does the factory have in stock?\n";
	cin  >>thingama;
	cout <<"How many Watchamacallits does the factory have in stock?\n";
	cin  >>watchama;
	cout <<"How many Framistats does the factory have in stock?\n";
	cin  >>framas;

Supplies Inventory;				//set inventory values 
	Inventory.setNumThingamajigs(thingama);
	Inventory.setNumWatchamacallits(watchama);
	Inventory.setNumFramistats(framas);

do{						//loop for user input until 'quit'
	cout<<"\nMake a selection for what you would like to do next:\n";

	displayMenu();				//call to display menu
						//returns options 1, 2, 3, or 4
	choice = getChoice(MAX_CHOICE);
	switch(choice)
	{	
		case '1':
			cout << "How many Thing 1's would you like to produce?\n";
			cin >>buildUnits;
			Inventory.producething1(buildUnits); 
		break;	
		case '2':
			cout << "How many Thing 2's would you like to produce?\n";
			cin >>buildUnits;
			Inventory.producething2(buildUnits);
		break;
		case '3': 
			Inventory.printPartsOrder();	
		break;
		
		case '4':
		break;
	}

}	while(choice !='4');
return 0;
}
