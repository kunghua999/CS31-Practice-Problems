#include <iostream>
using namespace std;

int main()
{
	int x=0,y=9;

	if (( x == 0 ) && ( y < 20 ))                            
		cout << "1";
	if (( y > 20 ) || ( x <  5 )) 
		cout << "2" << endl;
	if ( x == 12 )
		cout << "4" << endl;
	if (( x == 1) && ( 32767+x < 3641*y ))  
		cout << "5" << endl;
}
