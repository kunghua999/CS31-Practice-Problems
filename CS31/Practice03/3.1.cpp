#include <iostream>
using namespace std;

int main()
{
	// for( initialization; stay-in-loop-condition; prepare-for-next-iteration)
	// { statements; }
	// initialization -> check stay-in-loop-condition -> prepare for-next-
  	// iteration -> check stay-in-loop-condition ->¡K
	int i;

	for(i = 0; i <= 0; i++)
		cout << "Hello Loop!" << endl;

	cout << "i = " << i << endl;
}
