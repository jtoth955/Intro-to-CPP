/***************************
 * Name: John R Toth
 * Date: 2/4/15
 * Description: Box exercise .hpp file
 **************************/

#include <iostream>
#include <cmath>
using namespace std; 

#ifndef Box_H
#define Box_H

class Box {

public: 
	//default constructor
	Box();

	//destructor fn
	~Box();

	//accessor fns	
	double getVolume() const;
		//getVolume - returns volume of box
	
	double getSurfaceArea() const;
		//getSurfaceArea - returns surface area of box

	//mutator fns - fns that allow us to edit member var.
	
	void setHeight(double);	
		//setHeight  - sets height of box
		//@param double - height of box
	void setWidth(double);
		//setWidth - sets width of box
		//@param double - width of box
	void setLength(double);
		//setLength - sets lenght of box
		//@param double - length of box
	

private:
	//member variables 
	double newHeight;
	double newWidth;
	double newLength;
};

#endif
