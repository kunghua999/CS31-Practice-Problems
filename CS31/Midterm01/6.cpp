#include <iostream> 
#include <string>
using namespace std; 
 
int main() 
{ 
	string exp = "-3+3+555+99999";

	int mult = 1;
	int offs = 0;
	for(int i=0;i != exp.size() ; i += 2) {
		if( exp[ i ] == '-' ) 
			mult = i+5;
		else if( exp[ i ] == '+' ) 
			mult = i+8;
		else 
			offs = 1;
	}		
	cout << exp[offs] << exp[mult % exp.size() ] << endl;
}
