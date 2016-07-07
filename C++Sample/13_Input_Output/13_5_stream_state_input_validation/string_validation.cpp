#include <iostream>
#include <string>
#include <cctype> // isalpha()

using namespace std;

int main(int argc, char *argv[])
{
	string first_name, last_name;

	cout << "Insert Your Name(<first> <last>): "; // "Brian Song"
	cin >> first_name >> last_name;

	bool valid_first = true, valid_last = true;
	for (unsigned idx = 0; idx < first_name.length(); idx++) { // first name validation
		if (!isalpha(first_name[idx])) {
			valid_first = false;
			break;
		}
	}
	for (unsigned idx = 0; idx < last_name.length(); idx++) { // last name validation
		if (!isalpha(last_name[idx])) {
			valid_last = false;
			break;
		}
	}

	if (!valid_first || !valid_last)
		cout << "Error: Invalid Name Format";
	else
		cout << "Your Name: " << first_name << ", " << last_name;

	return 0;
}