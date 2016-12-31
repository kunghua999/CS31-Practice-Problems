#include <iostream>
using namespace std;

int find_solutions(int x)
{
	return (x*x - 8*x + 15);
}

int main()
{
	// We want to find the solutions to x^2 - 8x + 15
	// Solutions are:

	for(int x=0;x<=10;x++)
		if( find_solutions(x) == 0)
			cout << "x = " << x << " ";
	cout << endl;
}
