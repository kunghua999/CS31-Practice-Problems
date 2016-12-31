#include <iostream>
#include <string>
using namespace std;

struct employee // Can we replace struct by class?
{
	int ID;
	double salary;
	string jobtitle;
};
void getInput(employee emp)  // Should this be "employee &emp" ?
{
	cout << "ID Number: "; 
	cin >> emp.ID;

	cout << "Salary: ";    
	cin >> emp.salary; 

	cin.ignore(1000,'\n');
	cout << "Job title: "; 
	getline(cin,emp.jobtitle); 
}
int main()
{
	employee emp = {0,0,""};  // initialization
	// same as: emp.ID = 0; emp.salary = 0; emp.jobtitle = "";

	getInput(emp);

	cout << "There are 1 employee:\n";

	cout << "ID Number: " << emp.ID << endl;
	cout << "Salary: " << emp.salary << endl;
	cout << "Job Title: " << emp.jobtitle << endl;
}
