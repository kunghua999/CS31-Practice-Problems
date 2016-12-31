#include <iostream>
#include <string>
using namespace std;
const int MAXSODA = 100;

class Soda
{
public:
	Soda();
	void setName(string name);
	string getName() const;
private:
	string name;
};

Soda::Soda()
{
	// TODO: set name = "NA" to signal Not Available (5 points)


}
void Soda::setName(string name)
{
	// TODO: set Soda・s name as the name passed in. (5 points)


}
string Soda::getName() const
{
	// TODO: return Soda・s name. (5 points)


}
 
class VM
{
public:
	VM(int n);
	~VM();
	void restock(string name,int quantity);
	Soda* getSoda(string name);
	bool buySoda(string name);
private:
	Soda* inventory[MAXSODA];
	int quantity[MAXSODA];
	int numSoda;
};

VM::VM(int n)
{
	numSoda = n;

	for(int i=0;i<numSoda;i++)
		inventory[ i ] = new Soda();
}

VM::~VM()
{
	// TODO: (10 points)
	// Delete the storage pointed to by Soda pointers in inventory array





}

 
void VM::restock(string name,int quantity)
{
	for(int i=0;i<numSoda;i++)
		if( inventory[i]->getName() == "NA") 
		{
			// TODO: (10 points)
			// 1. If we found a Soda that has the name "NA", we set 
			// this Soda to have the name we passed into this function.
			// 2. Set the quantity for that Soda.
			// 3. Break out of this loop.




		}
}

Soda* VM::getSoda(string name)
{

	// TODO: (10 points)
	// Search all Soda Objects to see if there・s a matching Soda by name
	//     If there is a matching soda by name, return that Soda object.
	//     Return nullptr if there・s no matching Soda by name.













}
 
bool VM::buySoda(string name)
{
	// TODO: (15 points)
	// 1. Search through all Soda objects to find matching Soda by name
	//     If there is a matching soda by name, and if the quantity is > 0.
	//     then we decrease quantity for the Soda by 1 and return true
	//     If there is a matching soda by name, but the quantity is <= 0
	//     then we return false.
	//     If there is no matching soda name, return false.

	







}

int main()
{
	VM vm(5);
	vm.restock("Coke",4);
	vm.restock("Diet Coke",5);
	vm.restock("Sprite",1);
	vm.restock("Pepsi",0);
	vm.restock("Lemonade",1);

	if (vm.buySoda("Coke"))
	  cout << "I bought " << vm.getSoda("Coke")->getName() << endl;
	else
	  cout << "Coke is sold out!!" << endl;

	if (vm.buySoda("Pepsi"))
	  cout << "I bought " << vm.getSoda("Pepsi")->getName() << endl;
	else
	  cout << "Pepsi is sold out!!" << endl;
}
