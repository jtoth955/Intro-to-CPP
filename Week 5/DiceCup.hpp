/**********************
 * Name: John R Toth
 * Date: 1/3/15
 * Description: DiceCup header file
 *********************/


#include <iostream>
#include <cstdlib>

using namespace std; 

#ifndef DiceCup_H
#define DiceCup_H

class DiceCup{

public:
	//default constructor 
	DiceCup();
	
	//destructor fn
	~DiceCup();
	
	//fn to simulate dice roll
	int Roll() const;

	//mutator fns - fns that allow us to edit member variables
	
	void setNumDice(int);
		//setNumDine - sets number of dice
		//@param int - number of dice

	void setNumFaces(int);
		//setNumFaces - sets number of sides to die
		//@param int - number of sides
	
	void setRoll(int);
		//setRoll - sets number of die rolls
		//@param int - number of rolls

private:
	//member variables
	int newNumDice;
	int newNumFaces;
	int newRoll;

};
#endif
