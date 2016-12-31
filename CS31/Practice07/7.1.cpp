#include <iostream>
using namespace std;

int mystrcmp(const char str1[],const char str2[])
{
	int len1 = 0, len2 = 0;

	while((str1[len1] == str2[len2]) &&
		  (str1[len1] != '\0') &&
		  (str2[len2] != '\0' )) 
	{            
		len1++; 
		len2++; 
	}

	if (str1[len1] > str2[len2]) 
		return 1;
	else if ( str1[len1] < str2[len2] ) 
		return -1;
	return 0;
}

int main()
{
	char str1[14] = "CS31";
	char str2[14] = "CS32";

	cout << mystrcmp(str1,str2) << endl;
}
