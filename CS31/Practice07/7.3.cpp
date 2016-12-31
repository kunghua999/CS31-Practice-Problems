#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str1[14] = "CS31";
	char str2[14] = "CS32";

	cout << "str1 has length: " << strlen(str1) << endl;
	cout << "str2 has length: " << strlen(str2) << endl;

	strcat(str1,str2);
	cout << str1 << endl << str2 << endl;

	strcpy(str1,str2);
	cout << str1 << endl << str2 << endl;

	if(strcmp(str1,str2) == 0)
		cout << "string 1 and string 2 are equal!\n";
	else
		cout << "string 1 and string 2 are not equal!\n";
}
