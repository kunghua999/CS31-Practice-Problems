#include <iostream>
#include <string>
using namespace std;

int main()
{
	string fruits[10] ={"Apple","Banana","Cherry","DoubleCoconut",
				 	  	"Elderberry","FingerLime","Grapefruit",
				 		"Hackberry","IceCreamBean","JellyPalm"};
	char selection;
	do
	{
		cout << "What do you want to eat?" << endl;
		for(int i=0;i<10;i++)
			cout << "(" << (char)('a'+i) << ") " << fruits[i] << endl;

		cout << "(q) quit" << endl;
		cout << "Selection is ? " ;

		cin >> selection;

		if((selection>='a') && (selection <= 'j'))
		{
			cout << "You selected " << fruits[ selection-'a' ] ;

			for(int i=0;i<1000000000;i++); // pause...
		}
		else if(selection == 'q') ;
		else cout << "Please enter character a to j or q to exit.";

		cout << endl << endl;

	}while(selection!='q');
}

