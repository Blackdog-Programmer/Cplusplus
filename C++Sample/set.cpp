#include <iostream>
#include <set>

using namespace std;

void
changeSet(set<int> int_set)
{
	int_set.clear();
	set<int>::const_iterator it_set = int_set.begin();
	while (it_set != int_set.end())
	{
		cout << *it_set << " ";
		it_set++;
	}
	cout << "\n";
}

int
main(int argc, char *argv[])
{
	set<int> int_set;
	for (int i = 0; i < 10; i++)
		int_set.insert(i);

	// Before
	set<int>::const_iterator it0_set = int_set.begin();
	while (it0_set != int_set.end())
	{
		cout << *it0_set << " ";
		it0_set++;
	}
	cout << "\n";

	// After
	changeSet(int_set);
	set<int>::const_iterator it1_set = int_set.begin();
	while (it1_set != int_set.end())
	{
		cout << *it1_set << " ";
		it1_set++;
	}
	cout << "\n";

	return 0;
}