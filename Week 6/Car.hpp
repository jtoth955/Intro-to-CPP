/***************************
 * Name: John R Toth
 * Date: 2/9/15
 * Description: Car exercise, class file
 **************************/

//header --> fn declarations

#include <iostream>
#include <string> 

using namespace std; 

#ifndef Car_H
#define Car_H

class Car {
public: 

	//default constructor
	Car();

	//destructor fn
	~Car();

	//accessor fn
	int getSpeed(); 
		//getSpeed - returns speed of vehicle
	//mutator fn
	void setYear(int);
		//setYear - sets year of vehicle
		//@param int - year
	//mutator fn
	void setMake(string);
		//setMake - sets make of vehicle
		//@param string - make of vehicle
	//mutator fn
	void setSpeed(int);
		//setSpeed - sets speed of vehicle
		//@param int - speed
	//member fn 'brake'	
	void Brake();
	
	//member fn 'accelerate'
 	void  Accelerate();	



private: 
	//member variables
	int Year;
	string Make;
	int newSpeed;
};
#endif
