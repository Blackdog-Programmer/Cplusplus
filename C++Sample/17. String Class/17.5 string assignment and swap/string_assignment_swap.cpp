// Reference: http://www.learncpp.com/cpp-tutorial/17-5-stdstring-assignment-and-swapping/
//
#include <iostream>
#include <string>
#include <utility> // swap(T& a, T& b)

int
main(int argc, char *argv[])
{
	std::string str("Computer Vision");
	char *cstr = "Linear Algebra\0";
	
	std::string str1, str2;
	// Assignment Operator '='
	str1 = str;
	std::cout << str1 << "\n"; // Computer Vision
	str1 = cstr;
	std::cout << str1 << "\n"; // Linear Algebra
	str1 = 'V';
	std::cout << str1 << "\n"; // V

	// Assignment Method 'assign()'
	str2.assign(str);
	std::cout << str2 << "\n"; // Computer Vision
	str2.assign(cstr);
	std::cout << str2 << "\n"; // Linear Algebra
	str2.assign(str, 9, 6);
	std::cout << str2 << "\n"; // Vision
	str2.assign(6, 'V');
	std::cout << str2 << "\n"; // VVVVVV

	// Swapping
	str1 = str;
	str2 = cstr;
	std::cout << str1 << " - " << str2 << "\n";
	str1.swap(str2); // First Method
	std::cout << str1 << " - " << str2 << "\n";
	std::swap(str1, str2); // Second Method
	std::cout << str1 << " - " << str2 << "\n";

	return 0;
}