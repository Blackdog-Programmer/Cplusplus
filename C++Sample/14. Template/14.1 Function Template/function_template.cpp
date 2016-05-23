// Reference: http://www.learncpp.com/cpp-tutorial/141-function-templates/
//
#include <iostream>

template <class T> // Template Parameter Declaration
// template <class T1, class T2> // Multiple Parameters
T max(T tX, T tY) {
	return (tX >= tY) ? tX : tY;
}

int
main(int argc, char *argv[])
{
	std::cout << max(7, 3) << "\n";
	std::cout << max(1.718, 1.414) << "\n";
	std::cout << max('Z', 'A') << "\n";

	return 0;
}