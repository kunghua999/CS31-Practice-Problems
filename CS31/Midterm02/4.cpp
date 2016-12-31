#include <iostream>
#include <cstring>
using namespace std;

bool findTriple(char str[])
{
	int i;

	bool foundTripleZero = false;
	for(i = 1 ; i < strlen(str)-2 ; i++ )
	{
		if(foundTripleZero == true)  
			foundTripleZero = false;

		else if( ( str[i] == str[i+1]) && (str[i+1] == str[i+2]) )
			foundTripleZero = true;
	}
	return foundTripleZero;
}

int main()
{
	cout << findTriple("01110");
	cout << findTriple("00110"); 
	cout << findTriple("00010"); 
	cout << findTriple("10001"); 
	cout << endl;
}
