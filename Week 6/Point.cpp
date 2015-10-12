/****************************
 * Name: John R Toth
 * Date: 2/11/15
 * Description: Point exercise, cpp file
 ****************************/
  
#include <iostream>
#include <cmath>
#include "Point.hpp"
#include "LineSegment.hpp"

using namespace std;

//default constructor
Point::Point() {
	newXCoord1 = 0.0;
	newXCoord2 = 0.0;
	newYCoord1 = 0.0;
	newYCoord2 = 0.0;
}
//deconstructor
Point::~Point() { 

}  
//accessor fn getXCoord
double Point::getXCoord1() {
	return newXCoord1;
}
//accessor fn getYCoord
double Point::getYCoord1() {
	return newYCoord1; 
}
//mutator fn setXCoord
void Point::setXCoord1(double xcoord1, double xcoord2) {
	newXCoord1 = xcoord1;
	newXCoord2 = xcoord2;
}
//mutator fn setYCoord
void Point::setYCoord1(double ycoord1, double ycoord2) {
	newYCoord1 = ycoord1;
	newYCoord2 = ycoord2;
}
double Point::distanceTo() const{
cout<<"Distance of the line: " <<sqrt((pow(newXCoord2 - newXCoord1,2.0))+
		(pow(newYCoord2 - newYCoord1,2.0)))<<endl;
}

