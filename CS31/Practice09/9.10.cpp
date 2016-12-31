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
	employee(int ID, double salary, string jobtitle)
	{ 
		this->ID = ID; 
		this->salary = salary; 
		this->jobtitle = jobtitle; 
	}

	~employee()
	{
		cout << "This is destructor!!" << endl;
	}
	void Output();
private:
	int ID;
	double salary;
	string jobtitle;
};

void employee::Output()
{
	cout << "ID Number: " << ID << endl;
	cout << "Salary: " << salary << endl;
	cout << "Job Title: " << jobtitle << endl;
}
int main()
{
	employee A;												// (1)

	employee B(); 											// (2)

	employee C = {0,0,""}; 									// (3)

	employee D(1234, 90000.0, "Software Engineer");			// (4)

	employee *E = new employee;							// (5)

	employee *F = new employee();							// (6)

	employee *G = new employee(5432, 95000.0, "Manager");	// (7)

	A.Output();												// (8)

	B.Output(); 												// (9)

	C.Output(); 												// (10)

	D.Output();												// (11)

	E->Output(); 											// (12)

	F->Output();											// (13)

	G->Output();											// (14)
}
