/**************************************************
*Name: John R Toth
*Date: 3/5/15
*Description: Recursive fn that sums an array's size
**************************************************/

#include <iostream> 
using namespace std; 

//fn prototype, passes the array and size to fn definition
void reverseArray(const int num[], int size);

//main fn
int main() 
{
	//define variable, Array so that it can be used to determine size
	//of array
	int Array;
	
	//ask user for size of array and store in dynamic memory
	cout <<"How many values would you like to enter? ";
	cin  >> Array;

	//establish array with user specified size
	int John[Array];

	//for loop to fill array
	for(int i = 0; i < Array; i++)
	{
		cout <<"Enter a value for element " << i << ":" << endl;
		cin  >>John[i];
	}
	cout << endl << "Your numbers in reverse: ";
	//fn call to send array and size to fn definition reverseArray
	reverseArray(John, Array);

	//add a non-essential line at the end of program
	cout << endl;

	return 0; 
}
//fn definition, receives values of array and size
//@param void - takes array contents and displays in reverse
void reverseArray(const int num[], int size)
{
	if(size == 0)
		return; 
	else {
		reverseArray(num + 1, size - 1);
		cout <<"\n"<< num [0]; 
	}
}