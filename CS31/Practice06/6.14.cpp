#include <iostream>
#include <string>
#include <cassert>
using namespace std;

// Return the position of the first element that is not equal to the one
// that follows it.  Return ?1 if there are no such elements.
int findFirstNotEqual(const string a[], int n)
{
	for (int k = 0; k < n-1; k++)
		if (a[k] != a[k+1])
			return k;
    return -1;
}

int main()
{
	string h[5] = { "abc", "abc", "abc", "abe", "abf" };

	assert(findFirstNotEqual(h, 5) == 2);
	assert(findFirstNotEqual(h, 4) == 2);
	assert(findFirstNotEqual(h, 3) == -1);
	assert(findFirstNotEqual(h, 2) == -1);
	assert(findFirstNotEqual(h, 1) == -1);
	assert(findFirstNotEqual(h, 0) == -1);
	 
	cout << "All tests succeeded" << endl;
}
