/****************************
 * Name: John R Toth
 * Date: 2/11/15
 * Description: Point exercise, Point hpp file
 ***************************/

//header --> Fn declarations 

#include <iostream>
#include <cmath>

using namespace std;

#ifndef Point_H
#define Point_H

class Point {

public: 
	//default constructor
	Point();

	//destructor
	~Point();

	//accessor fn
	double getXCoord1();
		//getXCoord - returns X coordinate
	//accessor fn
	double getYCoord1();
		//getYCoord - returns Y coordinate
	//mutator fn 
	void setXCoord1(double, double);
		//setXCoord - sets X coordinate
		//@param double - x coordinate
	//mutator fn 
	void setYCoord1(double, double);
		//setYCoord - sets Y coordinate
		//@param double - y coordinate
	double distanceTo() const;
	
private: 
	//member variables
	double newXCoord1;
	double newXCoord2;
	double newYCoord1;
	double newYCoord2;
};
#endif
	
