#include<iostream>
using namespace std;

void output(int p, int q)
{ 
	cout << "Integer output!\n"; 
}

void output(double p, double q)
{ 
	cout << "Double output!\n"; 
}

int main()
{
	int x = 1, y = 1;
	double a = 1.0, b = 1.0;
	output(x,y);
	output(a,b);
}
