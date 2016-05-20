// Reference: http://www.learncpp.com/cpp-tutorial/94-overloading-operators-using-member-functions/
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
	// Overload Using 'Member Functions'
	void operator+= (Vector &v) {
		this->x += v.x; 
		this->y += v.y;
		this->z += v.z;
	}
	// '<<' Ouput Operator Overloading
	friend std::ostream& operator<< (std::ostream &out, const Vector &v);
};

std::ostream& operator<< (std::ostream &out, const Vector &v) {
	out << "<" << v.x << ", " << v.y << ", " << v.z << ">";
	return out;
}

int
main(int argc, char *argv[])
{
	Vector v1(1, 2, 5);
	Vector v2(7, 11, 13);
	// Befroe
	std::cout << "v1: " << v1 << "\n";
	std::cout << "v2: " << v2 << "\n";
	// After
	v1 += v2;
	std::cout << "v1 + v2: " << v1 << "\n";

	return 0;
}