class Base
{
private:
	int b_private;
public:
	int b_public;
protected:
	int b_protected;
};

class PublicDerived : public Base
{
public:
	PublicDerived() {
		b_private = 0;	// Error: Inaccessible
		b_public = 0;	// Anywhere can access
		b_protected = 0;// Only derived class can access
	}
};

class PrivateDerived : private Base
{
public:
	PrivateDerived() {
		b_private = 0;	// Error: Inaccessible
		b_public = 0;	// Become accessible only in immediate derived class
		b_protected = 0;// Only derived class can access
	}
};

class ProtectedDerived : private Base
{
public:
	ProtectedDerived() {
		b_private = 0;	// Error: Inaccessible
		b_public = 0;	// Become accessible only derived class
		b_protected = 0;// Only derived class can access
	}
};

int
main(int argc, char *argv[])
{
	PublicDerived derivedA;
	derivedA.b_private;	// Inaccessible
	derivedA.b_public; // Accessible
	derivedA.b_protected; // Inaccessible

	PrivateDerived derivedB;
	derivedB.b_private; // Inaccessible
	derivedB.b_public;	// Become Inaccessible
	derivedB.b_protected; // Inaccessible

	ProtectedDerived derivedC;
	derivedC.b_private; // Inaccessible
	derivedC.b_public; // Become Inaccessible
	derivedC.b_protected: // Inaccessible

	return 0;
}