#include <iostream>
#include <string>
using namespace std;
class employee
{
public:
	void input();    	// public member function
	void output(); 		// public member function
private:
	int ID;          	// private data member
	double salary;     	// private data member
	string jobtitle;     	// private data member
};
void employee::input()  
{
	cout << "ID Number: "; 
	cin >> ID;
	cout << "Salary: ";    
	cin >> salary; cin.ignore(1000,'\n');
	cout << "Job title: "; 
	getline(cin,jobtitle); 
}
void employee::output()
{
	cout << "There is one employee:\n";
	cout << "ID Number: " << ID << endl;
	cout << "Salary: " << salary << endl;
	cout << "Job Title: " << jobtitle << endl;
}
int main()
{
	employee emp;
	
	emp.input();
	emp.output(); 
}
