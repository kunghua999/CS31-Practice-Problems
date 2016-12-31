#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 100;
	int score[ SIZE ], i, min;

	for(i = 0; i < SIZE ; i++)
		score[ i ] = i + 60;

	for(i = 0, min = 2147483647; i < SIZE ; i++)
		if ( score[ i ] < min )
			min = score[i];

	cout << "Minimal value is: " << min << endl;
}
