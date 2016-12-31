#include <iostream>
using namespace std;

void arrayIntegerDivision(const int x[],int n, int y)
{
	if(y == 0)
	{
		cout << "Cannot divide by zero!" << endl;
		return ;
	}

	for(int i = 0 ; i < n ; i++ )
		x[ i ] = x[ i ] / y;
}

int main()
{
	const int SIZE = 10;
	int x[ SIZE ] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
	int y = 2;

	arrayIntegerDivision(x, SIZE, y);

	for(int i = 0; i< SIZE ; i++ )
		cout << x[i] << endl;
}
