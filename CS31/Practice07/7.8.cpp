#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char fruits[10][100] = {"Apple","Banana","Cherry","DoubleCoconut",		                  "Elderberry","FingerLime","Grapefruit",         
							"Hackberry","IceCreamBean","JellyPalm"};

	cout << strlen(fruits[0]) << endl << strlen(fruits[1]) << endl;
	cout << strlen(fruits[2]) << endl << strlen(fruits[3]) << endl;
	cout << strlen(fruits[4]) << endl << strlen(fruits[5]) << endl;
	cout << strlen(fruits[6]) << endl << strlen(fruits[7]) << endl;
	cout << strlen(fruits[8]) << endl << strlen(fruits[9]) << endl;

	char selected_fruits[200];

	strcpy(selected_fruits,fruits[0]);
	strcat(selected_fruits,fruits[1]);
	strcat(selected_fruits,fruits[2]);

	cout << selected_fruits << endl;

	if( strcmp(selected_fruits, "AppleBananaCherry") == 0)
		cout << "AppleBananaCherry!" << endl;
}
