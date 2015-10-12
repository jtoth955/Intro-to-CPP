/**************************************************
*Name: John R Toth
*Date: 3/5/15
*Description: hailstone project redux, using recursion
**************************************************/

#include <iostream>
#include <cmath>
using namespace std; 
				
//fn prototype, sequence, sends users input for
//beginning value
int sequence(int val);

//fn prototype, next, determines whether a number 
//in the sequence is odd or even
int next(int);

//main fn, ask user for beginning value of hailstone sequence
int main()		
{
	// beg value input by user
	int begvalue;	

	cout <<"Enter a beginning integer value ";
	cout <<"for a hailstone sequence:\n";
	cin  >>begvalue;
	
	//fn call to sequence to begin determining number of values
	//in hailstone sequence
	sequence(begvalue);

	//displays the number of steps in the hailstone sequence
	cout<<"Number of steps: "<< sequence(begvalue)-1 <<endl;
	
return 0; 
}
//fn definition for next
//@param int - fn determines if next number in sequence is odd
//or even, performs calculation, then returns value to sequence fn
//to determine if the value is 1 or > 1, repeats until value is 1
int next(int number)
{
	if(number % 2 == 0){
		number /= 2;
	}
	else{
		number = (number * 3) + 1;
	}
	return number;
}
//fn definition for sequence
//@param int - fn determines number of steps for hailstone sequence
int sequence(int val)
{
	if(val == 1){
		return 1;
	}		
	else {
		return 1 + sequence(next(val));
	}
}
