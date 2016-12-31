#include <iostream>
#include <string>
using namespace std;

class employee
{
	int ID;
	double salary;
	string jobtitle;
};

int main()
{
	employee *emp = new employee;
	// This also works: employee *emp = new employee();

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
