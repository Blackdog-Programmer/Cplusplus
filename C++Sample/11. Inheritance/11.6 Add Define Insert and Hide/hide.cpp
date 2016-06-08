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
private: // Hide Accessibility: 'public' -> 'private'
	Base::print; // Note! do not insert function operator'()' at postfix
};

int
main(int argc, char *argv[])
{
	Base base;
	Derived derived;

	base.print();
	//derived.print(); // Become inaccessible

	// "Base"
	
	return 0;
}