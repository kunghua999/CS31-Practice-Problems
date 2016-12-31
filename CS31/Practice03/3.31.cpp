#include <iostream>
#include <string>
using namespace std;

int main()
{
	int numOfChars = 0, numOfDigits = 0;
	int numOfUpperChars = 0, numOfLowerChars = 0;

	string s = "It is a beautiful day!";

	s[0] = tolower(s[0]);
	s[6] = toupper(s[6]);

	for(int i = 0 ; i != s.size() ; i++)
	{
		if(isalpha(s[i])) numOfChars++;

		if(isdigit(s[i])) numOfDigits++;

		if(islower(s[i])) numOfLowerChars++;

		if(isupper(s[i])) numOfUpperChars++;
	}

	cout << numOfChars << " " << numOfDigits << endl;
	cout << numOfUpperChars << " " << numOfLowerChars << endl;

}
