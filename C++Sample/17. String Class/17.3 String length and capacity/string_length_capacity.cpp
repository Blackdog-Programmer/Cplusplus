// Reference: http://www.learncpp.com/cpp-tutorial/17-3-stdstring-length-and-capacity/
//
#include <iostream>
#include <string>

int
main(int argc, char *argv[])
{
	std::string str("");
	std::cout << str.empty() << "\n"; // 1(true)

	str.reserve(26);
	std::cout << str.capacity() << "\n"; // larger than 26; system dependent

	std::cout << str.max_size() << "\n"; // system depedent

	for (int i = 0; i < 26; i++) {
		str += 'A' + i; // Alphabet Sequence
	}

	std::cout << str.length() << "\n"; // 26
	std::cout << str << "\n"; // "ABCD...Z"

	return 0;
}