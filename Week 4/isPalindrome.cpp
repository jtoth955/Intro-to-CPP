/*********************
* John R Toth
* Date: 1/28/2015
* Description: Palindrome Fn
*********************/

#include <iostream>
#include <string>

using namespace std;

bool ispal(const string& word);

int main()
{
	string word;
	
	cout <<"Enter your word:\n";
 	getline(cin, word);

	if(ispal(word))
	{
	cout <<"True"<<endl;
	}
	else
	{
	cout <<"False"<<endl;
	}

return 0;
}

bool ispal(const string& word)
{
	if (word.empty())
	return false; 

	int i = 0; 
	int j = word.length()-1;

	while (i < j)
	{
	if (word[i] != word[j])
		{
		return false;
		}
	i++;
	j--;
	}
	return true;
}
