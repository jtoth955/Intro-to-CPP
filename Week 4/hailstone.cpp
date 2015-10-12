/******************
* Name: John R Toth
* Date: 1/28/15
* Description: Hailstone sequence program
******************/

#include <iostream>
#include <cmath>


using namespace std; 
				
int sequence(int val);		//Fn prototype

int main()		//int main fn
{
	int steps;
	int begvalue;	// beg value input by user

	cout <<"Enter a beginning integer value ";
	cout <<"for a hailstone sequence:\n";
	cin  >>begvalue;
	
	sequence(begvalue);
	
	steps=sequence(begvalue);
	cout<<"Number of steps: "<<steps<<endl;
	
return 0; 
}
/*******************
*     Sequence     *	
*******************/
int sequence(int val)
				//sequence fn 
{				//calculates number of hailstone iterations
 	int steps = 0;
	while( val > 1)		//while loop, for values > 1
{
	if(val % 2 == 0) 	//if statement for even values
	{
	val /= 2;
	}
		else 		//else statement for odd values
		{val = (val * 3) + 1;
		}		
	steps++;		//increments loop
}	
	return(steps);		//return steps to main fn

} 


