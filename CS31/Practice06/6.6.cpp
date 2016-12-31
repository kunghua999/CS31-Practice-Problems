#include <iostream>
using namespace std;

//Adding 2 polynomials: Q6xR^3+Q3xR^2+2x+1 and Q9xR^3+15x^2+299

int main()
{
	const int SIZE = 4;
	int poly1[] = {1, 2, 3, 6};
	int poly2[] = {299, 0, 15, 9};
	int result[ SIZE ], i;

	for(i = 0 ; i < SIZE ; i++)
		result[ i ] = poly1[ i ] + poly2[ i ];

	cout << "result is: ";

	for(i = SIZE-1 ; i > 0; i--)
		cout << result[i] << "X^" << i << " + ";

	cout << result[0] << endl;
}
