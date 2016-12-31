#include <iostream>
using namespace std;

int main()
{
	int a=1,b=2;

	if (a==b) ;                      // Extra semicolon here
	{
		cout << "a equals to b" << endl;
	}
	if (a!=b) ;
	{
		cout << "a is not equal to b" << endl;
	}
}
