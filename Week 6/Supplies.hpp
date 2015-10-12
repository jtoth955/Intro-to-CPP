/*************************
 * Name: John R Toth
 * Date: 2/10/15
 * Description: Supplies exercise, hpp file
 ************************/

#include <iostream>

using namespace std;

#ifndef Supplies_H
#define Supplies_H

class Supplies {
public:
	//default constructor
	Supplies();

	//destructor fn
	~Supplies();

	//mutator fn - allows us to edit member variable, one at a time
	void setNumThingamajigs(int);
		//sets the number of thingamajigs
	void setNumWatchamacallits(int);
		//sets the number of watchamallits
	void setNumFramistats(int);
		//sets the number of framistats
	
	void printPartsOrder();
	//resets parts order to 100 Thingamajigs, 70 Watchamacallits
	//and 50 Framistats
	void producething1(int) ; 
	//product 1, requiring: 1 thingamajig, 2 watchamacallists, and 1 framistat
	//@return int - production of 1 thing1.
	void producething2(int) ;
	//product 2, requiring: 2 thingamajigs and 1 framistat

private:
	//member variables
	int newThingama;
	int newWatchama;
	int newFramas;
};
#endif
