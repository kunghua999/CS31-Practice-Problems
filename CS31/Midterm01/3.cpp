#include <iostream> 
#include <string>
using namespace std; 
 
int main() 
{ 
	string str = "abcdefga";
	int value = 0;

	for(int i = 0 ; i != str.size() ; i++ ) {
		for(int j = i + 1 ; j != str.size() ; j++ ) {
			if( str[ i ] == str[ j ] ) {
				value = j - i;
			}
		}
	}

	cout << value << endl;
}
