/************************
 * Name: John R Toth
 * Date: 1/3/15
 * Description: Dice simulator
 ***********************/

#include <ctime>
#include <iostream> 
#include <cstdlib>
#include "DiceCup.hpp"
using namespace std; 

//default constructor
DiceCup::DiceCup() {
	newNumDice = 1;
	newNumFaces = 2;

} 
//destructor fn
DiceCup::~DiceCup() {				 

}
//num of dice loop
int DiceCup::Roll() const  {
	int total = 0;
	for (int i=0; i < newNumDice; i++)
		{
		total = total+rand()%newNumFaces+1;
		}
	return total;		
}
//member variable newNumDice gets changed to input param, dice
void DiceCup::setNumDice(int dice) {
	if (dice > 0)
	newNumDice = dice;
		else {
		DiceCup::newNumDice=0;
		cout <<"Error, bad number of dice\n";}
}
//member variable newNumFaces gets changed to input param, faces
void DiceCup::setNumFaces(int faces) {
	if (faces > 0)
	newNumFaces = faces;
	else{
	DiceCup::newNumFaces=0;
	cout <<"Error, bad number of faces\n";}	
}
//main fn
int main()
{

	int newNumDice;
	int newNumFaces;
 	int i;
	int dice; 
	int faces;
	int roll;
	unsigned seed;
	seed = (time(0));
	srand(seed);
	
	cout <<"Enter the number of dice that you want to use: ";
	cin  >>dice;
	
	cout <<"How many faces does the die have? ";
	cin  >>faces;

	cout <<"How many times would you like to roll the dice? ";
	cin  >>roll;


//call member fns to set number of dice and faces
DiceCup Game_1;
	Game_1.setNumDice(dice);
	Game_1.setNumFaces(faces);

for (i = 0; i < roll; i++)		//loop simulating rolling of die
	cout <<Game_1.Roll()<<endl;
	
					
return 0;
}
