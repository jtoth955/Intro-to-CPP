/************
 * Name: John R Toth
 * 1/28/15
 * Description: Program that measures distance fallen
 * *********/


#include <cmath>
#include <iostream>

using namespace std; 	
				//Fn prototype
double distance(double time);

int main() 
{


	double input;		//user input
	double travel;

	cout <<"How long has the object been falling?:\n";
	cin  >>input;

	distance (input);

	travel=distance (input);
	cout <<"The distance travelled was: "<< travel<<" meters."<<endl;

return 0;
}
 /**************************
 *        Distance         *
 **************************/
double distance(double time)//
	 
{             				//user input passed to distance fn			        			 //calculation for distance
	double travel; 
	travel= (.5*(9.8*(pow(time,2))));

	return(travel);	
 
}
