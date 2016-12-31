#include <iostream>
using namespace std;

int main()
{
	int x=0,count=0; // Initialization

	// While Syntax:
	// while(stay-in-loop-condition is true) 
	// {          statements;         }

	while(count != 2) // stay-in-loop-condition
	{
		if ( (x*x - 8*x + 15) == 0 )
		{
			cout << "x = " << x << endl;
			count++;  // prepare-for-next-iteration
		}
		x++;
	}
} 
