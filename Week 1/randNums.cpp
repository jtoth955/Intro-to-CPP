/******************
 * Name: John R Toth
 * Date: 1/7/15
 * Description: Random number excercise
 * ****************/

#include <iostream> 
#include <cstdlib> //header file needed to use rand
#include <ctime>

using namespace std; 
int main()
 
{
	
	int	num1,
		num2,
		rando1,
		rando2,
		rando3,
		rando4,
		rando5;

	//Instructions prompt
	cout << "I will ask for two integers, give me the first one here: ";
 	cin >> num1;
	//instructions prompt
	cout << "Now give me your second integer: ";
	cin >> num2;

//srand(time(0));
	
	cout << "Here are 5 random numbers, from the values you provided:\n ";
	
	rando1 = rand() % (num1 - num2) + 1;
	rando2 = rand() % (num1 - num2) + 1;
	rando3 = rand() % (num1 - num2) + 1;
	rando4 = rand() % (num1 - num2) + 1;
	rando5 = rand() % (num1 - num2) + 1;

	cout << rando1 << "\n " ;
	cout << rando2 << "\n " ; 
	cout << rando3 << "\n " ;
	cout << rando4 << "\n " ; 
	cout << rando5 << "\n " << endl;


return 0;
}
