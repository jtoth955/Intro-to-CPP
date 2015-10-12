/***********************************
*Name: John R Toth
*Date: 2/24/15
*Description: sphereMain file
***********************************/

#include <iostream>
#include "Sphere.hpp"
#include <cmath> 

using namespace std;

//fn prototype for printSphereInfo
void printSphereInfo(Sphere *pSphere);

//main fn
int main() 
{
	//variable definitions
	double radius;

	//requests input from user, defining the radius of a sphere
	cout <<"What is the radius of a sphere? "; 
	cin  >> radius;

//call to fns Sphere object and printSphere
Sphere Object;
	Object.setRadius(radius);

	printSphereInfo(&Object);


return 0;
}
//fn header printSphereInfo
void printSphereInfo(Sphere *pSphere)
{
	cout <<"Radius: " << pSphere->getRadius() <<endl
	<< "Volume: " << pSphere->getVolume() << endl;
}








