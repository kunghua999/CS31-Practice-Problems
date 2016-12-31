#include <iostream>
#include <string>
using namespace std;

struct employee // Can we replace struct by class?
{
	int ID;
	double salary;
	string jobtitle;
};

int main()
{
	employee emp_a;
	employee *emp = &emp_a;

	// The arrow, ->, is used with a pointer to acess the members 
	// of a struct/class.   emp->ID is equivalent to (*emp).ID

	cout << "ID Number: "; 
	cin >> emp->ID;
	
	cout << "Salary: ";    
	cin >> (*emp).salary; 

	cin.ignore(1000,'\n');
	cout << "Job title: "; 
	getline(cin,emp->jobtitle); 

	cout << "There is one employee:\n";
	cout << "ID Number: " << emp->ID << endl;
	cout << "Salary: " << emp->salary << endl;
	cout << "Job Title: " << emp->jobtitle << endl;
}
