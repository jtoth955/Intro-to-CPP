/************************
 * Name: John R Toth
 * Date: 1/7/15
 * Description: Celcius to Fahrenheit conversion
 ***********************/

#include <iostream>	//necessary for displaying cout and cin
#include <cmath>	//necessary for math function
//#include <iomain>	//necessary for setprecision
using namespace std;
 
int main () 
{

	double 	cel, f;


	cout << "Enter a temperature in Celcius: ";
	cin >> cel;

	//Compute and display temperature in Fahrenheit.
	
	f = (1.8 * cel) + 32;
	cout << "Your temperature is " << f << " degrees Fahrenheit."<< endl;


return 0;
}


