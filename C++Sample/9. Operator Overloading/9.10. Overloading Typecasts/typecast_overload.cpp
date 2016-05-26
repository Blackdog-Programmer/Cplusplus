// Reference: http://www.learncpp.com/cpp-tutorial/910-overloading-typecasts/
//
#include <iostream>

using namespace std;

class Rectangle 
{
private:
	int height;
	int width;
public:
	Rectangle(int n_height, int n_width) : height(n_height), width(n_width) {}
	int getHeight() { return height; }
	int getWidth() { return width; }
};

class Sqaure
{
private:
	int height;
	int width;
public:
	Sqaure(int n_height, int n_width) : height(n_height), width(n_width) {}
	// Typecast Overloading
	operator Rectangle() { return Rectangle(height, width); } // Note: no return type syntax required
};

int
main(int argc, char *argv[])
{
	Sqaure square(5, 5);
	Rectangle rectangle = square; // Typecast
	cout << "Height: " << rectangle.getHeight() << "\n";
	cout << "Width : " << rectangle.getWidth() << "\n";

	return 0;
}