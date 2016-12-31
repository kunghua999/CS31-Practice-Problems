#include<iostream>
using namespace std;

int main()
{
	for(int month = 1;month<=2; month++ )
	{
		switch(month)
		{
			case 1: cout << "January has 31 days" << endl; 
					break;
			case 12: cout << "December has 31 days" << endl; 
					break;
			default: cout << "?" << endl; break;
		}
	}
}
