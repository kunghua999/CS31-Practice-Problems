#include <iostream>
using namespace std;

int main()
{
	char ch = '0';           	// Suppose the code number for '0' is x
	ch++;                 		// now ch is '1' (x+1)

	cout << ch << endl;
	cout << (int)ch << endl; 	// force ch to be integer type

	ch += 7;             		// now ch is '8' (since (x+1)+7 is x+8)

	cout << ch << endl;
	cout << (int)ch << endl; 	// force ch to be integer type

	int n = ch;               	// n is the code number for '8' (i.e., x+8)

	cout << n << endl;
	cout << (char)n << endl; 	// force integer n to be char type

	int m = ch - '3';        	//  '8' - '3'
			             		//  = (x+8) - (x+3)
								//  = 8 - 3
			          			//  so m is 5
	cout << m << endl;
}
