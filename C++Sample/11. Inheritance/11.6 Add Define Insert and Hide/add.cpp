#include <iostream>

using namespace std;

class Base
{
public:
	void print1() {
		cout << "Base" << "\n";
	}
};

class Derived : public Base
{
public:
	// Add new function
	void print2() {
		cout << "Derived" << "\n";
	}
};

int
main(int argc, char *argv[])
{
	Base base;
	Derived derived;

	base.print1();
	derived.print2();

	// "Base"
	// "Derived"
	return 0;
}