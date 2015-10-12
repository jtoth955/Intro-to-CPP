/******
 * Name: John R Toth
 * Date: 1/7/2015
 * Description: excercise 3, ticket program
 * ******/

#include <iostream>	//necessary for displaying cout and cin
#include <cmath>	//necessary for math function
#include <iomanip>	//necessary for setprecision
using namespace std;

int main ()
{

	const double CLASS_A = 15.00;	//Price of Class A tickets
	const double CLASS_B = 12.00;	//Price of Class B tickets
	const double CLASS_C = 9.00;	//Price of Class C tickets
	double	a, b, c, ca, cb, cc;	




	cout << "Number of Class A seats that were sold: "; 
	cin >> a; 

	cout << "Number of Class B seats that were sold: ";
	cin >> b; 

	cout << "Number of Class C seats that were sold: ";
	cin >> c;

	//compute and display amount made on tickets.
	
	ca = CLASS_A * a; 
	cout << fixed  << setprecision(2) << " Class A seats produced  "<< ca 
	<< " in income.\n"; 
	
	cb = CLASS_B * b; 
	cout << " Class B seats produced " << cb
	<< " in income.\n"; 

	cc = CLASS_C * c; 
	cout << " Class C seats produced " << cc
	<< " in income." <<  endl;

return 0; 

} 
