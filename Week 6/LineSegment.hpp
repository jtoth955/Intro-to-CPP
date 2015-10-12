/****************************
 * Name: John R Toth
 * Date: 2/11/15
 * Description: Point exercise, LineSegment hpp file
 ****************************/
 
//header --> fn declarations

#include <iostream>
#include <cmath>
#include "Point.hpp"

using namespace std;

#ifndef LineSegment_H
#define LineSegment_H

class LineSegment {

public: 
	//default constructor
	LineSegment(); 
	
	//destructor
	~LineSegment();

	//accessor fns 
	double getEnd1();
		//getEnd1 - returns endpoint 1
	//accessor fn
	double getEnd2();
		//getEnd2 - returns endpoint 2
	//mutator fn 
	void setEnd1(double, double);
		//setEnd1 - sets endpoint 1
		//@param double - enpoint 1
	//mutator fn 
	void setEnd2(double, double); 
		//setEnd2 - sets endpoint 2
		//@param double - endpoint 2
	//member fn 'length'
	double length();
 	//member fn 'slope'
 	void slope();

private: 
	//member variables 
	double newEndPointx1;
	double newEndPointy1;
	double newEndPointx2;
	double newEndPointy2;
};
#endif
