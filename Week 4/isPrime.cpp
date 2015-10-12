/*****************
*Name: John R Toth
*Date: 1/28/15
*Desctiption: Program for determining prime numbers
******************/

#include <iostream>
using namespace std; 

bool prime(int);

int main()
{

	int number;

	cout <<"Enter an even integer:\n";
	cin  >>number;

	if(prime(number))
	{	
	cout <<"True"<<endl;
	}
	else
	{
	cout <<"False"<<endl;
	}
return 0; 
}

bool prime(int number)
{
	int num;

	for (num = 2; num < number; num++)
	{
	if (number % num == 0)
	{
	return false;
	}
	}	
	return true;
}

