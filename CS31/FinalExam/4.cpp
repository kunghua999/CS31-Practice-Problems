#include <iostream>
#include <string>
using namespace std;

int foo( string s )
{
	if (s.size () < 1)
		return -1;

	int mult = 1;
	int offs = 0;
	switch (s[0])
	{
		case '-':
			mult = -1;
			break ;
		case '+':
			mult = 1;
			break ;
		default :
			offs = 1;
			break ;
	}
	return mult * (s[1 - offs ] - '0');
}

int foo2(string exp)
{
	string exp1="", exp2="", exp3="";
	int i;

	for(i=0;i<=1;i++) exp1 += exp[i];
	for(i=5;i<=7;i++) exp2 += exp[i];
	for(i=8;i<=13;i++) exp3 += exp[i];

	return foo(exp1) + foo(exp2) + foo(exp3);
}

int main()
{
	cout << foo2("-3+3+555+99999") << endl;
	return 0;
}
