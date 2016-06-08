#include <iostream>

using namespace std;

class Base
{
public:
	void print() {
		cout << "Base" << "\n";
	}
};

class Derived : public Base
{
public:
	void print() {
		Base::print(); // Insert Inherited Function
		cout << "Derived" << "\n";
	}
};

int
main(int argc, char *argv[])
{
	Base base;
	Derived derived;

	base.print();
	derived.print();

	// "Base"
	// "Base"
	// "Derived"

	return 0;
}