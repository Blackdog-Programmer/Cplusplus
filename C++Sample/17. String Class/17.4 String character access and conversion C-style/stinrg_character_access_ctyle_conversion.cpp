// Reference: http://www.learncpp.com/cpp-tutorial/17-4-stdstring-character-access-and-conversion-to-c-style-arrays/
//
#include <iostream>
#include <string>
#include <cstring>

int
main(int argc, char *argv[])
{
	std::string str("Hello World"); // C++ String
	const char *cstr; // C String

	for (size_t i = 0; i < str.length(); i++) {
		std::cout << str[i]; // Operator[]
	}
	std::cout << "\n";

	cstr = str.c_str(); // Conversion to C-style string
	std::cout << cstr << "\n";

	return 0;
}