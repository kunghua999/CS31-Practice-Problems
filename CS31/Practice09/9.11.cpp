// The general way to code a class is to
// (1) Hide information: leave data member in private section
// (2) Declare accessor and mutator functions to access private members.
//     - Accessor: only read the private data members out.
//     - Mutator: change the private data members.

#include <iostream>
#include <string>
using namespace std;

class employee
{
public:
	// Is it okay NOT to declare your own constructor and destructor?

	void setValues(int theID, double theSalary)
	{   // This is a mutator function
		ID = theID; salary = theSalary;
	}

	// These two member functions below are accessor functions
	int getID() 
	{ 
		return ID; 
	}
	double getSalary();

private:
	int ID;
	double salary;
};

double employee::getSalary()
{
	return salary;
}

int main()
{
	employee emp[2];

	emp[0].setValues(1, 100000.0);
	emp[1].setValues(2, 110000.0);

	cout << "ID1: " 		<< emp[0].getID() 
		 << " Salary1 = " 	<< emp[0].getSalary() << endl;

	cout << "ID2: " 		<< emp[1].getID() 
         << " Salary2 = " 	<< emp[1].getSalary() << endl;
}
