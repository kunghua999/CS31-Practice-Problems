#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 3;
	int arr[SIZE][SIZE] = { {1,2,3}, {4,5,6}, {7,8,9} };

	for(int i = 0 ; i < SIZE ; i++ )
	{
		for(int j = 0 ; j < SIZE ; j++ )
			cout << arr[ i ][ j ];
		cout << endl;
	}
}
