#include <iostream>
#include <string>

using namespace std;

int
main(int agrc, char *argv[])
{
	string str = "345cd34";
	int val;

	val = stoi(str);
	cout << val;
	return 0;
}