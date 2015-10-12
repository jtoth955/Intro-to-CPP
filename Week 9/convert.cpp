/*********************************************************************************
*Name: John R Toth
*Date: 3/6/15
*Description: Binary to decimal, decimal to binary 
*conversion using recursion
*********************************************************************************/

#include <iostream> 
#include <string> 
#include <cmath>

using namespace std; 

//fn definition for binarytoInt, checks for valid binary input
int binarytoInt(string biValue, unsigned int i = 0)
{
	int tot = 0;
	if (i < biValue.length())
	{
		if(biValue[i] == '1')
			tot = pow(2, i);
		else if(biValue[i] != '0')
		{
			cout << "String is not formatted in binary\n";
		//	return 0;
		}
		return tot + binarytoInt(biValue, ++i);
	}
	return tot;
}
//fn definition for inttoBinary, checks for valid integer input
string toBinary(int deciNum)
{
	int remainder = 0;

	if (deciNum == 0)	//base case
	{
		return "0";
	}
	else if (deciNum == 1) //base case
	{
		return "1";
	}
	else
	{
		remainder = deciNum % 2;
		if (remainder == 1) //if statements to convert remainder to string
		{
			return toBinary(deciNum / 2) + "1";	//recursive call
		}
		else if (remainder == 0)
		{
			return toBinary(deciNum / 2) + "0";	//recursive call
		}

	}
}
//fn definition for getChoice, captures user input 1-3
char getChoice(char max)
{
	char choice = cin.get();
	while ((choice < '1')||(choice > max))
	{
		choice = cin.get();
	}
	return choice; 
}
//fn definition for displayMenu
void displayMenu()
{
	cout <<"1. Convert binary to decimal\n"; 
	cout <<"2. Convert decimal to binary\n";
	cout <<"3. Quit\n";
}

/*********************************************************************************
*Main fn 
*displays do-while loop menu of 3 items, asks for user input and defines variables 
*********************************************************************************/
int main()
{
	char choice; 
	const char MAX_CHOICE = '3'; 
	string binary;
	int integer;
	string y;
	int dec;

	do {
		//prompt for user to make a selection, from options 1-3
		cout << "Make a selection:\n"; 

		//fn call to displayMenu, builds menu with 3 options
		displayMenu(); 

		//returns options 1,2, or 3
		choice = getChoice(MAX_CHOICE);
		switch(choice)
		{
			case '1': 
			cout <<"Enter a binary value:\n";
			cin  >> binary;
			dec = binarytoInt(binary);
			cout << dec << endl;
			break;
			case '2': 
			cout <<"Enter an integer value:\n";
			cin  >> integer;
			y = toBinary(integer);
			cout << "Your conversion to binary is: "
			<< y << endl;
			break;
			case '3': 
			break;
		}
	}while(choice != '3');
	
return 0;
}
