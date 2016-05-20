// Reference: http://www.learncpp.com/cpp-tutorial/93-overloading-the-io-operators/
//
#include <iostream>

class Vector
{
private:
	int x;
	int y;
	int z;
public:
	Vector() {}
	Vector(int m_x, int m_y, int m_z) : x(m_x), y(m_y), z(m_z) {}
	// '>>' Input Operator Overloading
	friend std::istream& operator>> (std::istream &in, Vector &v);
	// '<<' Ouput Operator Overloading
	friend std::ostream& operator<< (std::ostream &out, const Vector &v);
};

std::istream& operator>> (std::istream &in, Vector &v) {
	in >> v.x >> v.y >> v.z;
	return in;
}

std::ostream& operator<< (std::ostream &out, const Vector &v) {
	out << "<" << v.x << ", " << v.y << ", " << v.z << ">";
	return out;
}

int
main(int argc, char *argv[])
{
	Vector v;
	// Input: 'cin' is type of 'istream'
	std::cin >> v;
	// Output: 'cout' is type of 'ostream'
	std::cout << v << "\n";

	return 0;
}