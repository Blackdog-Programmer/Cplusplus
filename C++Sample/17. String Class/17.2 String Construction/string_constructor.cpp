// Reference: http://www.learncpp.com/cpp-tutorial/17-2-stdstring-construction-and-destruction/
//
#include <iostream>
#include <string>

int
main(int agrc, char *argv[])
{
	char cstr[6] = { 'H', 'E', 'L', 'L', 'O', '\0' }; 
	std::string str = "World!!!";

	// String Constructors
	std::string emp_str();	// #1 Empty String
	std::string cop_str(str);	// #2 Copy Constructor
	std::string sub_str(str, 5, 3); // #3 Substring
	std::string cop_cstr(cstr);	// #4 Copy C string
	std::string cop_cnstr(cstr, 4); // #5 Copy n charcter from C string
	std::string fil_str(5, 'V');	// #6 Fill n characters
	
	std::cout << cop_str << "\n";	// "World!!!"
	std::cout << sub_str << "\n";	// "!!!"
	std::cout << cop_cstr << "\n";	// "HELLO"
	std::cout << cop_cnstr << "\n";	// "HELL"
	std::cout << fil_str << "\n";	// "VVVVV"
	
	return 0;
}