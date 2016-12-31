#include <iostream>
#include <string>
using namespace std;
class employee
{
public:
	employee() 
	{ 
		ID=0; 
		salary=0; 
		jobtitle=""; 
	}

	void setData(int ID, double salary, string jobtitle)
	{ 
		this->ID = ID; 
		this->salary = salary; 
		this->jobtitle = jobtitle; 
	}

	int getID() const {  return ID;  }

	~employee()
	{
		cout << ID << " got laid off!!" << endl;
	}

	void Output() 
	{
		cout << "ID Number: " << ID << endl;
		cout << "Salary: " << salary << endl;
		cout << "Job Title: " << jobtitle << endl;
	}

private:
	int ID;
	double salary;
	string jobtitle;
};
class company 
{
public:
	company() {}
	company(string name,int numEmp) 
	{
		this->name = name;
		emp = new employee[numEmp];
		for(int i=0;i<numEmp;i++) 
		{
			emp[i].setData(i+1, 80000,"Software Engineer");
			cout << emp[i].getID() 
				 << " got hired to join the company" << endl;
		}
	}
	~company() 
	{
		cout << this->name << " company goes bankrupt!!" << endl;
		delete [] emp;
	}
private:
	employee *emp;
	string name;
};

int main()
{
	company comp("ABC", 2);
}
