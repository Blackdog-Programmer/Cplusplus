#include <iostream>

using namespace std;

class Ancestor
{
public:
	Ancestor() {
		cout << "Ancestor" << "\n";
	}
};

class Parent : public Ancestor
{
public:
	Parent() {
		cout << "Parent" << "\n";
	}
};

class Child : public Parent
{
public:
	Child() {
		cout << "Child" << "\n";
	}
};

int
main(int argc, char*argv[])
{
	Ancestor ancestor;
	Parent   parent;
	Child    child;

	// "Ancestor"
	// "Ancestor"
	// "Parent"
	// "Ancestor"
	// "Parent"
	// "Child"

	return 0;
}