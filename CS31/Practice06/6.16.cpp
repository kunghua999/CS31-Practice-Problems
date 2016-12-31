#include <iostream>
#include <string>
using namespace std;

int main()
{
	string fruits[10]= {"Banana","Cherry","DoubleCoconut",
						"Elderberry","FingerLime","Grapefruit",
						"Hackberry","IceCreamBean","JellyPalm","Apple"};

	string smallest = fruits[0];
	int smallest_index = 0; 

	for(int i=1;i<10;i++) 
	{
		if( fruits[i] < smallest) 
		{
			smallest = fruits[i];
			smallest_index = i;
		}
	}

	cout << "The index for the smallest fruits string is at " 
		 << smallest_index << endl;

	if( smallest == "apple" ) 
		cout << "Found apple!" << endl;
}
