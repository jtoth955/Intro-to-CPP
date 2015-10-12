/*******************
 * Name: John R Toth
 * Date: 1/12/2015
 * Description: Finding the difference between 2 integers
 * *****************/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	int	x, y, diff;

	cout 	<<"\nEnter two integer values and I will find the\n"
		<<"difference between the two values.\n" 
		<<"\nEnter the first value here: ";
	cin	>>x; 
	cout 	<<"Now enter the second value: ";
	cin 	>>y;

	if 	(x>y){
		diff = (x-y);}
	else if	(y>x){
		diff = (y-x);}
 
	cout	<<"The difference between the two values is: "<<diff<<endl;



return 0;
}
