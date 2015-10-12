/**************************************************
*Name: John R Toth
*Date: 3/5/15
*Description: Recursive fn that sums an array's size
**************************************************/

#include <iostream> 
using namespace std; 

//fn prototype, passes the array and size to fn definition
double sumArray(double num[], int size);

//main fn
int main() 
{
	//define dynamically created variable, Array
	int *Array;
	Array = new int;
	
	//ask user for size of array and store in dynamic memory
	cout <<"How many values would you like to enter? ";
	cin  >> *Array;

	//establish array with user specified size
	double John[*Array];

	//for loop to fill array
	for(int i = 0; i < *Array; i++)
	{
		cout <<"Enter a value for element " << i << ":" << endl;
		cin  >>John[i];
	}

	//display the sum of the array
	cout << sumArray(John, *Array) << endl;

	//free dynamically created memory by deleting the  
	//contents of Array and set Array to 0
	delete[] Array;
	Array = 0;
	
	return 0; 
}
//fn definition, receives values of array and size
//@param double - computes the total sum of array and returns value
double sumArray(double num[], int size)
{
	if(size <= 0){
		return 0;
	}

	else{
		return num[0]+sumArray(num + 1, size - 1);
	}
}