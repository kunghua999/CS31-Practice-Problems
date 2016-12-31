#include <iostream>
#include <string>
using namespace std;
struct employee // Can we replace struct by class?
{
	int ID;
	double salary;
	string jobtitle;
};
// same as employee *emp or employee emp[]
void getInput(employee emp[2]) 
{
	for(int i=0;i<2;i++)
	{	cout << "ID Number: "; 	cin >> emp[i].ID;
		cout << "Salary: ";   	cin >> emp[i].salary; cin.ignore(1000,'\n');
		cout << "Job title: "; 	getline(cin,emp[i].jobtitle); 
	}
}
int main()
{
	employee emp[2];

	getInput(emp);

	cout << "There are 2 employees:\n";
	for(int i=0;i<2;i++)
	{
		cout << "Employee #" << i+1 << ":" << endl;
		cout << "ID Number: " << emp[i].ID << endl;
		cout << "Salary: " << emp[i].salary << endl;
		cout << "Job Title: " << emp[i].jobtitle << endl;
	}
}
