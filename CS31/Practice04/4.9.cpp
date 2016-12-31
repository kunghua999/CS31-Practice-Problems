#include <iostream>
using namespace std;

int sum2(int,int,int);

int sum(int n1, int n2, int n3)
{
	return (n1 + n2 + n3 + sum2(n1, n2, n3));
}
int main()
{
	int sum2(int n4, int n5, int n6)
	{ return (n4 + n5 + n6); }

	int x = 1, y = 2, z = 3;
	cout << sum( x, y, z) << endl;
}
