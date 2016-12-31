#include <iostream>
using namespace std;

int main()
{
	int value = 1000;
	int *p = &value;
	int *q;
	q = &value;

	cout << "Address of value is: " << &value << endl;
	cout << "Value of value is: " << value << endl;

	cout << "Address of p is: " << p << endl;
	cout << "Value of p is: " << *p << endl;

	cout << "Address of p is: " << q << endl;
	cout << "Value of p is: " << *q << endl;
}
