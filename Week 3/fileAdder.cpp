/****************
 * Name: John R Toth
 * Date: 1/20/15
 * Description: Program that reads external files
 ***************/

#include <iostream>
#include <fstream>

using namespace std;

main()
{

ifstream inputFile;			
int countnums = 0, nums, totnums;	

inputFile.open ("nums.txt");		//open and read input file

if (inputFile)				
{
while(inputFile >> nums)		//loop to determine depth of file
	{
	totnums += nums;
	countnums++;
	}

inputFile.close();			//close file

}
else 					//error display
{
	cout << "Error opening the file \n";	
}


					//write findings to sum.txt file

ofstream outputFile; 


outputFile.open ("sum.txt");

if (outputFile)
{
cout << "Now writing data to the file. \n";

outputFile << "The sum of the values is " << totnums ;

outputFile.close(); 

cout << "Complete" <<endl;			//external file is written

}
else 
{
	cout << "Error writing to file\n";
}

return 0;
}


