/****************
 * Name: John R Toth
 * Date: 1/13/15
 * Description: Number guess
 * *************/

#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
int main()
{

	unsigned seed;
	int number, guess, attempts=0;

	seed=time(0);	//random number seed
	srand(seed);
	number = rand() % 100+1;
	
cout<<"The secret number is: "<<number<<endl; //sanity keeper

	//Get the user to play the game by guessing numbers
	do{
	cout<<"\nGuess the random number, between 1-100: "<<endl;
	cin >>guess;
	
	attempts++;
	
	
	if(guess < number)			//if guess is too low
	{	cout<<"You're too low\n";
		}

	else if(guess > number)			//if guess is too high
	{	cout<<"You're too high\n";
		}		
	
	else
		cout<<"Congratulations!\n"	//if guess is correct
		    <<"You got the right number in "<< attempts <<" tries!"<<endl;
		
	
} 	while (guess != number);





return 0;
}
