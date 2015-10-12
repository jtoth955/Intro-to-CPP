/*******************************************
*Name: John R Toth
*Date: 2/24/15
*Description: small sort, using parameters and pointers
********************************************/

#include <iostream> 
using namespace std; 

//sortValue prototype function, takes 3 int values as pointers, then sorts into 
//smallest to greatest values. 
void sortValue (int *, int *, int *);

//main fn, asks user to input 3 integers, displays those values then calls
//sortValue fn
int main() 
{

	int val1, val2, val3; 

	cout << "Type in 3 random values and I will sort them, least to greatest:\n"; 
	cin  >> val1 >> val2 >> val3; 

	int *p1 = &val1,
		*p2 = &val2, 
		*p3 = &val3; 

	cout << "\nYour unsorted numbers are:\n" << *p1 <<",\n"<< *p2 <<",\n"<< *p3 << endl;


		sortValue(&val1, &val2, &val3);

return 0;
}
/**********************************************
*				sortValue fn 				  * 	//sortValue fn, receieves values by parameter
**********************************************/		//and then sorts them from smallest to greatest


void sortValue (int *val1, int *val2, int *val3)
{
	int temp;

	if (*val1 > *val2)								//if statements designed to find smallest mid and largest
		{											//values and reorder, from smallest to largest
			temp = *val1;
			*val1 = *val2;
			*val2 = temp;
		}
	if (*val1 > *val3)
		{
			temp = *val1;
			*val1 = *val3;
			*val3 = temp;
		}
	if (*val2 > *val3)
		{
			temp = *val2;
			*val2 = *val3;
			*val3 = temp; 
		}	

		//display re-ordered values
		cout 	<<"\nYour sorted values are: " <<endl<< *val1 <<", "
				<<endl<< *val2 <<", "<<endl<< *val3 << endl << endl;
}












