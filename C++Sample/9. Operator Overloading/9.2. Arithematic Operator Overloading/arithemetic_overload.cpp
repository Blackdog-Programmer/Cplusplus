// Reference : http://www.learncpp.com/cpp-tutorial/92-overloading-the-arithmetic-operators-using-friend-functions/
//
#include <iostream>

using namespace std;

class Box
{
private:
	int n_marble;
public:
	Box(int new_marble) : n_marble(new_marble) {}
	// Arithematic Operator Overloading
	friend Box operator+ (Box &b1, Box &b2);
	friend Box operator- (Box &b1, Box &b2);
	friend Box operator* (Box &b1, int multi);
	friend Box operator* (int multi, Box &b);
	friend Box operator/ (Box &b, int divid);
	// I/O Operator Overloading
	friend ostream& operator<< (ostream &out, const Box &b) {
		return out << b.n_marble;
	}
};

Box operator+ (Box &b1, Box &b2) {
	return Box(b1.n_marble + b2.n_marble);
}

Box operator- (Box &b1, Box &b2) {
	return Box(b1.n_marble - b2.n_marble);
}

Box operator* (Box &b, int multi) {
	return Box(b.n_marble * multi);
}

Box operator*(int multi, Box &b) {
	return Box(multi * b.n_marble);
}

Box operator/(Box &b, int divid) {
	return Box(b.n_marble / divid);
}


int
main(int argc, char *argv[])
{
	Box b1(12);
	Box b2(6);

	cout << "b1: " << b1 << "\n";
	cout << "b2: " << b2 << "\n";
	cout << "b1 + b2: " << b1 + b2 << "\n";
	cout << "b1 - b2: " << b1 - b2 << "\n";
	cout << "b1 * 11: " << b1 * 11 << "\n";
	cout << "11 * b1: " << 11 * b1 << "\n";
	cout << "b1 + 12: " << b1 / 12 << "\n";

	return 0;
}