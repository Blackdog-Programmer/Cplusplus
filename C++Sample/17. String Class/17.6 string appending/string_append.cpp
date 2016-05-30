// Reference: http://www.learncpp.com/cpp-tutorial/17-6-stdstring-appending/
//
#include <iostream>
#include <string>

int
main(int argc, char *argv[])
{
	std::string str("");
	std::string m_str("Top Coder");
	std::string n_str("HYU ");
	char *c_str = " MPPECS\0";
	char c = '!';

	// Append Operator '+='
	str += m_str;
	std::cout << str << "\n"; // Top Coder
	str += c_str;
	std::cout << str << "\n"; // Top Coder MPPECS
	str += c;
	std::cout << str << "\n"; // Top Coder MPPECS!
	str.clear();

	// Append Method 'append()'
	str.append(n_str);
	std::cout << str << "\n"; // HYU
	str.append(m_str, 4, 5);
	std::cout << str << "\n"; // HYU Coder
	str.append(c_str);
	std::cout << str << "\n"; // HYU Coder MPPECS
	str.append(5, c);
	std::cout << str << "\n"; // HYU Coder MPPECS!!!!!

	return 0;
}