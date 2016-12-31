#include <iostream>
#include <string>
using namespace std;

struct employee  // we can replace struct by class, but¡K
{
	int ID;
	double salary;
	string jobtitle;
};   // <- Remember to put semicolon here¡K.

int main()
{
	employee emp;
	
	cout << "Please enter employee information:\n";

	cout << "ID Number: "; 
	cin >> emp.ID;
		
	cout << "Salary: ";    
	cin >> emp.salary; cin.ignore(1000,'\n');
		
	cout << "Job title: "; 
	getline(cin,emp.jobtitle); 

	cout << "There is one employee:\n";

	cout << "ID Number: " << emp.ID << endl;
	cout << "Salary: " << emp.salary << endl;
	cout << "Job Title: " << emp.jobtitle << endl;
}
