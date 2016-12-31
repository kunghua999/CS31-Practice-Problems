#include <iostream>
using namespace std;

int main()
{
	int a = 1;  // Syntax for do-while
				// do the statement at least once and then test the condition
		      	// If condition is false, exit. If true, then loop.
		      	// But in this program, something is wrong¡K
	do
	{
		a = 2;
	} while (1!=0)

	cout << "a = " << a << endl;
}
