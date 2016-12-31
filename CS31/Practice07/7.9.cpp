#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char fruits[10][100] ={"Apple","Banana","Cherry","DoubleCoconut",                       "Elderberry","FingerLime","Grapefruit",
						   "Hackberry","IceCreamBean","JellyPalm"};

	for(int i = 0 ; i < strlen(fruits[0]) ; i++ )
		fruits[0][ i ] = tolower( fruits[0][ i ] );

	cout << (fruits[0][4]=toupper(fruits[0][4]));

	if( isupper( fruits[1][0] ) )  
		cout << fruits[1][0];

	if( isupper( fruits[2][0] ) )  
		cout << fruits[2][0];

	if( isalpha( fruits[3][0] ) )  
		cout << fruits[3][0];

	if( ! isdigit( fruits[8][0] ) ) 
		cout << fruits[8][0];

	if( islower( fruits[8][1] ) )  
		cout << (fruits[8][1]=toupper(fruits[8][1]));

	cout << endl;
}
