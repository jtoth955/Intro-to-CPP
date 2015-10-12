/***********************************
*Name: John R Toth
*Date: 2/24/15
*Description: findMode program, finds the popular integer(s)
***********************************/

#include <iostream> 
#include <vector> 
using namespace std; 

//fn prototypes
void displayVector(vector<int>); 
//void sortVector(vector<int> &);
void vectorMode(vector<int> &);

//main fn
int main() {
		//variable definitions
	 	int index, *j;
		j = new int;

	//create vector with variable values
	vector <int> values;

	//defines number of integers user would like to input
	cout << "How many values would you like to input? ";
	cin  >> *j; 

	//for loop that takes in the number of integers the user requested
	for (index = 0; index < *j; index++)
	{
		int input;

		cout << "Enter number "<< (index + 1)<<endl;
		cin  >> input;
		values.push_back(input);
	}

	//display the values
	cout <<"\nYou entered: \n"; 
	displayVector(values);
	vectorMode(values);

	//free the memory by deleting contents of j and setting to 0
	delete [] j;
	j = 0;

//end of main fn	
return 0;
}
//displayVector displays the integers input by the user
void displayVector(vector<int> numbers)
{
	for (unsigned count = 0; count < numbers.size(); count++)
		cout << numbers [count] << " ";
	cout <<endl;
}
//vectorMode fn that determines the mode(s) of the values input by the user
void vectorMode(vector<int>  &numbers)
{
	int previous = 0;
	int current = 0;
	int mode = 0; 
	int occurence;

		for (int i = 0; i < numbers.size(); i++)
		{	
			current = 0;
			for (int j = 0; j < numbers.size(); j++ )
				{
				if (numbers[j] == numbers[i]) 
						current++;
				}
				if (current > previous)
				{	
					mode = numbers[i];
					previous = current; 
					occurence = previous;
					}			
	 	}
	cout << "Mode(s) = "<< mode <<endl;	
	} 	

