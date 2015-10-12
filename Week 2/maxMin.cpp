/*********************
 * Name:  John R Toth
 * Date: 1/13/2015
 * Description: User controlled loops 
 * ******************/

#include<iostream>

using namespace std;

int main()
{
	int num,times;
	double input, min=999, max= 0;
	


						//get user input	
	cout<<"How many numbers would you like to enter? ";
	cin>> input;
	num=1;	
	times=num;

						//establish loop
	while (times <= input)
	{cout<< "Enter your number: ";
	cin >> num;
	times++;

	if (num < min)
		min = num;
						//capture min and max inputs

	if (num > max)
		max = num;
		
}
						//output results
cout<<"Your largest number was: "<<max<<endl;
cout<<"Your smallest number was: "<<min<<endl;


return 0;
}
