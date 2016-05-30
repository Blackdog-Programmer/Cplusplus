// Referece: http://www.learncpp.com/cpp-tutorial/17-7-stdstring-inserting/
//
#include <iostream>
#include <string>

int
main(int argc, char *argv[])
{
	std::string str("");
	std::string m_str("ACM-ICPC MPPECS");
	std::string n_str(" TOP ");
	char *c_str("CODER ");
	char c = '!';

	// String Insert
	str.insert(0, m_str);
	std::cout << str << "\n"; // ACM-ICPC
	str.insert(9, n_str, 1, 4); 
	std::cout << str << "\n"; // ACM-ICPC TOP MPPECS
	str.insert(13, c_str);
	std::cout << str << "\n"; // ACM-ICPC TOP CODER MPPECS
	str.insert(25, 5, c);
	std::cout << str << "\n"; // ACM-ICPC TOP CODER MPPECS!!!!!

	return 0;
}