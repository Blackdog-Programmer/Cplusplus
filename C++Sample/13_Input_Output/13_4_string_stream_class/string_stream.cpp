#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	stringstream strstm;
	string str0, str1;
	int val0; double val1;

	strstm << "Hello World!"; // '<<' insertion operator
	strstm >> str0 >> str1; // '>>' extraction operator
	cout << str0 << " / " << str1 << "\n";

	strstm.str("3.141592"); // set new string content
	cout << strstm.str() << "\n";

	strstm.str(""); // set empty
	strstm.clear(); // reset error flag

	strstm << "7 2.718";
	strstm >> val0 >> val1; // automatically built-in data type conversion
	cout << val0 << " / " << val1 << "\n";

	// Hello / World!
	// 3.141592
	// 7 / 2.718

	return 0;
}