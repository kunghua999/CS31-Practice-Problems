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
	employee emp[2];
	// employee *emp = new employee[2];

	for(int i=0;i<2;i++)
	{	cout << "ID Number: "; cin >> emp[i].ID;
		cout << "Salary: ";    cin >> emp[i].salary; cin.ignore(1000,'\n');
		cout << "Job title: "; getline(cin,emp[i].jobtitle); 
	}

	cout << "There are 2 employees:\n";

	for(int i=0;i<2;i++)
	{
		cout << "Employee #" << i+1 << ":" << endl;
		cout << "ID Number: " << emp[i].ID << endl;
		cout << "Salary: " << emp[i].salary << endl;
		cout << "Job Title: " << emp[i].jobtitle << endl;
	}
}
