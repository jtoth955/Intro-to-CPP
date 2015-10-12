/***********************************
*Name: John R Toth
*Date: 2/24/15
*Description: Sphere class file
***********************************/

#include <iostream> 
#include <cmath> 
#include "Sphere.hpp"

using namespace std; 

//default constructor 
Sphere::Sphere() {
	newRadius = 0.0;
}
//destructor 
Sphere::~Sphere() {

}
//accessor fn 'getRadius'
double Sphere::getRadius() {
	return newRadius;
}
//accessor fn 'getVolume'
double Sphere::getVolume() {
	return ((1.333)*((3.141592653)*(pow(newRadius,3.0))));
}
//mutator fn setRadius, sets value of radius
void Sphere::setRadius(double radius) { 
	newRadius = radius;
}


