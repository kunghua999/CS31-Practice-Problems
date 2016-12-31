#include <iostream>
#include <string>
using namespace std;

struct employee // Can we replace struct by class?
{
public:
	void outputID() { cout << ID << endl; }
	int ID;
	double salary;
};

int main()
{
	employee emp[5];

	// Before we rotate left at the first position 

	for(int i = 0 ; i < 5 ; i++ )
	{
		emp[i].ID = i; 
		emp[i].salary = 10000*i + 50000;
		emp[i].outputID();
	}

	cout << "====" << endl;

	// Now we want to rotate left at the first position

	employee temp = emp[0];
	for(int i = 0 ; i < 4 ; i++ )
		emp[i] = emp[i + 1];
	emp[4] = temp;

	for(int i = 0 ; i < 5 ; i++ )
		emp[i].outputID();
}
