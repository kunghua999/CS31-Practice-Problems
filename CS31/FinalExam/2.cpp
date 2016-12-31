#include <iostream>
#include <string>
using namespace std;

bool isPermutation(string str1, string str2)
{
	if(str1.size() != str2.size()) 
		return false;
	
	int i, j, counts[10];

	for(i=0;i<10;i++) 
		counts[i] = 0;

	for(i=0;i<str1.size();i++)
		counts[ str1[i] -   0  ] ++; 		// (1) 

	for(i=0;i<str1.size();i++)
		counts[ str2[i] -   0  ] --;   	// (2) 

	for(i=0;i<10;i++)               	// (3)
		if(counts[i] != 0)            	// (4)
			return true;             	// (5) 
	return false;           			// (6) 
}

int main()
{
	cout << isPermutation("ABCDE", "BDECA") << endl;
	cout << isPermutation("BALLS", "CALLS") << endl;
} 

