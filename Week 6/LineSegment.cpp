/****************************
 * Name: John R Toth
 * Date: 2/11/15
 * Description: Point exercise, LineSegment cpp file
 ****************************/

#include <iostream>
#include <cmath>
#include "LineSegment.hpp"
#include "Point.hpp"

using namespace std;

//default constructor
LineSegment::LineSegment() {
	newEndPointx1 = 0.0;
	newEndPointx2 = 0.0;
	newEndPointy1 = 0.0;
	newEndPointy2 = 0.0;
}
//destructor
LineSegment::~LineSegment() {

}
//accessor fn 'getEnd1'
double LineSegment::getEnd1() {
	return newEndPointx1;
}
//accessor fn 'getEnd2'
double LineSegment::getEnd2() {
	return newEndPointx2;
}
//mutator fn 'setEnd1'
void LineSegment::setEnd1(double x1, double y1) {
	newEndPointx1 = x1; 
	newEndPointy1 = y1;
}
//mutator fn 'setEnd2'
void LineSegment::setEnd2(double x2, double y2) {
	newEndPointx2 = x2; 
	newEndPointy2 = y2;
}
//length fn - determines length of coordinates input by user
double LineSegment::length() {
	return sqrt((pow(newEndPointx2 - newEndPointx1,2.0))+
		(pow)(newEndPointy2 - newEndPointy1,2.0));
}
//slope fn - determines if vertical value is infinite and returns slope
void LineSegment::slope() {
	if(isinf((newEndPointy2 - newEndPointy1)/(newEndPointx2 - newEndPointx1)))
		{cout <<"LineSegment is vertical\n";}	

		else	
		{cout <<"The slope is: "<<
		((newEndPointy2 - newEndPointy1)/(newEndPointx2 - newEndPointx1))
		<<endl;}
}
//main fn 
int main()
{
	double xcoord1;
	double ycoord1;
	double xcoord2;
	double ycoord2;
	//user prompts for all x and y coordinates 
	cout <<"What is the X1 coordinate for Point 1?\n"; 
	cin  >>xcoord1;
	cout <<"What is the Y1 coordinate for Point 1?\n"; 
	cin  >>ycoord1;
	cout <<"What is the X2 coordinate for Point 2?\n";
	cin  >>xcoord2;
	cout <<"What is the Y2 coordinate for Point 2?\n";
	cin  >>ycoord2;

//create a LineSegment object with values input by user
LineSegment Values;
Values.setEnd1(xcoord1, ycoord1);
Values.setEnd2(xcoord2, ycoord2);

Point Objects;
Objects.setXCoord1(xcoord1, xcoord2);
Objects.setYCoord1(ycoord1, ycoord2);
//call to distanceTo in Points cpp
Objects.distanceTo();
//call to slope  
Values.slope();

	cout <<"The length of the line is: "<<Values.length()<<endl;

return 0;
}
