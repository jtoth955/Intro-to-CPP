/***************
 * Name: John R Toth
 * Date: 1/26/15
 * Description: sorting user input numbers
 * *************/

#include <iostream>

using namespace std; 

void getNums(int&, int&, int&);	//fn prototype to acquire inputs 

void orderNums(int&, int&, int&); //fn prototype to order inputs

int main()				//main fn	
{
	int small, med, large;

	getNums(small, med, large); 	//acquiring numbers from user
	
	cout <<"\nHere are the numbers you entered: \n";
	cout << small<< endl;
	cout << med << endl;
	cout << large << endl;

	orderNums(small, med, large);	//puling the ordered values back

	cout <<"\nYour numbers, ordered smallest to largest: \n";
	  cout	<<small<<endl;
	  cout 	<<med<<endl;
	  cout  <<large<<endl;

return 0;				//end of main fn
}

/**********************************	//beginning of getNums fn
 *	     getNums		  *
 *********************************/

void getNums(int &input1, int &input2, int &input3)
{
	cout <<"Enter three integer values:\n";
	cin  >>input1>>input2>>input3;
}


/***********************************	//beginning of orderNums fn
 *	   orderNums		   *
 **********************************/

void orderNums(int &num1, int &num2, int &num3)
{
	int temp;
	
	if (num1 > num2)		//sorting user values 
{	temp = num1;			//smallest to largest
	num1 = num2; 
	num2 = temp;
}	
	if(num1 > num3)
{       temp = num1;
        num1 = num3;
        num3 = temp;
}
    	if(num2 > num3)
{       temp = num2;
        num2 = num3;
        num3 = temp;
}	
}

