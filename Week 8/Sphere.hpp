/***********************************
*Name: John R Toth
*Date: 2/24/15
*Description: Sphere class header file
***********************************/

#include <iostream> 
using namespace std; 

#ifndef Sphere_H
#define Sphere_H

class Sphere {

public: 

	//default constructor
	Sphere(); 

	//destructor fn 
	~Sphere(); 

	//accessor fn
	double getRadius(); 
		//getRadius - returns radius of circle

	//mutator fn - allows us to edit member variables, one at a time
	void setRadius(double); 
		//setRadius - sets radius value
		//@param double
	double getVolume(); 
		//getVolume - returns the volume of the spehere object

private: 
	 double newRadius;

};
#endif