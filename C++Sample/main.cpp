
#include <iostream>

using namespace std;

int
main(int agrc, char *argv[])
{
	int *a = new int[500000];
	
	delete[] a;

	return 0;
}