// Reference: http://www.learncpp.com/cpp-tutorial/96-overloading-the-comparison-operators/
//
#include <iostream>

class Element
{
private:
	int key;
	int pos;
public:
	Element (int n_key, int n_pos) : key(n_key), pos(n_pos) {}
	// Comparison Overload
	bool operator< (Element e) {
		return this->key < e.key;
	}
	bool operator== (Element e) {
		return this->key == e.key;
	}
	bool operator> (Element e) {
		return this->key > e.key;
	}
	// I/O Overload
	friend std::ostream& operator<< (std::ostream& out, Element e) {
		out << "[" << e.key << " : " << e.pos << "]";
		return out;
	}
};

int
main(int argc, char *argv[])
{
	Element e0(5, 5);
	Element e1(5, 6);

	std::cout << "e0: " << e0 << "\n";
	std::cout << "e1: " << e1 << "\n";
	if (e0 < e1)
		std::cout << "e0 < e1" << "\n";
	else if (e0 == e1)
		std::cout << "e0 == e1" << "\n";
	else if (e0 > e1)
		std::cout << "e0 > e1" << "\n";
	else
		;

	return 0;
}