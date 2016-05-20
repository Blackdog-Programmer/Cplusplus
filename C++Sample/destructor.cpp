#include <iostream>

using namespace std;

class A
{
public:
	~A() {
		cout << "~A() called" << endl;
	}
};

class B
{
private:
	A a;
public:
	~B() {
		cout << "~B() called" << endl;
	}
};

int main(int argc, char* argv[])
{
	B b;
	
	return 0;
}