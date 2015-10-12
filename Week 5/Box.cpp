/***********************
 * Name: John R Toth
 * Date: 2/3/15
 * Description: Box exercise .cpp file
 ***********************/

#include "Box.hpp"
//default constructor
Box::Box() {
	newHeight = 1.0;
	newWidth = 1.0;
	newLength = 1.0;
}
//destructor fn
Box::~Box() {

}
//accessor fn 'getVolume' returns calcuated Volume
double Box::getVolume() const {		 
	return (newLength*newHeight*newWidth);
}
//accessor fn 'getSurfaceArea', returns calculated SurfaceArea
double Box::getSurfaceArea() const {
return((2*(newLength*newWidth))+(2*(newLength*newHeight))+(2*(newWidth*newHeight)));
}
//member variable newHeight gets changed to the input variable, height
void Box::setHeight(double height) {
	if (height >= 1.0)
		newHeight = height;	
	else
		{newHeight = 0.0;
		cout <<"Error, bad height value\n";}
}
//member variable newWidth gets changed to the input variable, width
void Box::setWidth(double width) {
	if (width >= 1.0)
		newWidth = width;
	else
		{newWidth = 0.0;
		cout <<"Error, bad width value\n";}
}
//member variable new:Length gets changed to the input variable, length
void Box::setLength(double length) {
	if (length >= 1.0)
		newLength = length;
	else
		{newLength = 0.0;
		cout <<"Error, bad length value\n";}
}
//main fn
int main()	
{
	double height;
	double length; 
	double width;

	cout <<"Enter the height of a rectangle: \n";
	cin  >>height;
	cout <<"Enter the length of a rectangle: \n";
	cin  >>length;
	cout <<"Enter the width of a rectangle: \n";
	cin  >>width;

//call member fns to set box dimensions	
Box Dimensions_1;
Dimensions_1.setLength(length);
Dimensions_1.setWidth(width);
Dimensions_1.setHeight(height);

//call member fns to get and display box area and volume values
cout<<"Surface Area of Box: "<<Dimensions_1.getSurfaceArea()<< endl
	<<"Volume of box: "<<Dimensions_1.getVolume()<<endl;

return 0;
} 
