#include <iostream>
#include <string> // stoi()
#include <stdexcept> // invalid argument exception

using namespace std;

int main(int argc, char *argv[])
{
	string str;
	int val;

	cin >> str;
	try {
		val = stoi(str);
		cout << val;
	}
	catch (const invalid_argument& ia) {
		cout << "invalid integer foramt: " << ia.what() << "\n";
	}
	return 0;
}