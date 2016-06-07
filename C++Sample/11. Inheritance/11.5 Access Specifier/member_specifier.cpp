class Base
{
private:
	int b_private;
public:
	int b_public;
protected:
	int b_protected;
};

class Derived : public Base
{
public:
	Derived() {
		//b_private = 0; // Inaccessible
		b_public = 0; // Anywhere can access
		b_protected = 0; // Only derived class can access
	}
};

int
main(int argc, char *argv[])
{
	Derived derived;
	//derived.b_private = 0; // Inaccessible
	derived.b_public = 0;
	//derived.b_protected = 0; // Inaccessible

	return 0;
}