#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int val;
	cin >> val;

	if (cin.fail() == true) {
		cout << "ERROR: invalid integer format";
		exit(0);
	}
	else {
		cout << val;
	}
	return 0;
}