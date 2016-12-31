#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 100;
	double score[ SIZE ];
	int i;

	for(i = 0; i < SIZE ; i++ )
		score[ i ] = 60.0 + i*(1.0);

	for(i = 0; i < SIZE-1 ; i++ )
		if ( score[ i ] == score[ i + 1 ] )
			cout << "Some scores are equal" << endl;

	cout << "No scores are equal" << endl;
}
