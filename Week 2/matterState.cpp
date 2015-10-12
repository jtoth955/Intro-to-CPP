/*****************
 * Name: John R Toth
 * Date: 1/13/2015
 * Description: Freezing and boiling points of varying substances
 * ***************/

#include <iostream>

using namespace std;

int main ()
{
	
	int	temp;

	cout 	<< "Oxygen, ethyl, mercury and water can be frozen,"
		<< "\nliquid or solid, depending on their temperature." 
		<< "\nInput a temperature, in degrees fahrenheit, and"
		<< "\nI will tell you what each substance is, at that"
		<< " temperature\n"
		<< "Enter any integer value here: ";  


	cin 	>> temp;	//user inputs seed value

 	if (temp <= -362)	
		{cout <<"at "<< temp <<" degrees Oxygen, ethyl and mercury will" 
					" be frozen\n";}	
	else if((temp >= -361) && (temp <=-307))
		{cout <<"at "<< temp <<" degrees, oxygen will be a liquid, ethyl"
					" mercury, and water will be frozen\n"; }
	else if ((temp >= -306) && (temp <=-173))
		{cout <<"at "<< temp <<" degrees, oxygen is a gas, ethyl, mercury"
					" and water will be frozen\n";}
	else if ((temp >= -172) && (temp <=-38))
		{cout <<"at "<< temp <<" degrees, oxygen is a gas, ethyl is a liquid"						" mercury and water are frozen\n";}
	else if ((temp >= -37) && (temp<= 32))
		{cout <<"at "<< temp <<" degrees, oxygen is a gas, ethyl and mercury"						" are liquids and water is frozen\n";}
	else if ((temp >= 33) && (temp<= 171))
		{cout <<"at "<< temp <<" degrees, oxygen is a gas, ethyl, mercury"
					" and water are liquids\n";}
	else if((temp >= 172) && (temp<= 211))
		{cout <<"at "<< temp <<" degrees, oxygen and ethyl are gasses,"
					" while mercury and water are liquids\n";}
	else if ((temp >= 212) && (temp<=677))
		{cout <<"at "<< temp <<" degrees, oxygen, ethyl and water are"
					" gasses, mercury is a liquid\n";}
	else if (temp >= 678)
		{cout <<"at "<< temp <<" degrees, oxygen, ethyl, mercury and water"
					" are all gasses\n"; }
	 

return 0;
}
