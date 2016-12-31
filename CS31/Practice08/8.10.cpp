#include <iostream>
using namespace std;

int main()
{
	int x[5] = {1,2,3,4,5};
	int *p = x;  // same as int *p = &x[0];
	// x is the beginning address of an array
	// so the above is the same as:
	// int *p;  p = x;

	cout << "*p is x[0]" << endl;
	cout << *p << endl;      
	cout << p << endl;

	cout << "*p++ returns *p and then do p++" << endl;
	cout << *p++ << endl;
	cout << p << endl;

	cout << "*(p++) is the same as *p++" << endl;
	cout << *(p++) << endl;
	cout << p << endl;

	cout << "(*p)++ means adding 1 to (*p) which is x[2] here." << endl;
	cout << (*p)++ << endl;
	cout << p << endl; // address does not change 

	for(int i=0;i<5;i++)
		cout << x[i] << " ";
	cout << endl;
}
