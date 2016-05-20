#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
	// 2-D Vector
	int M = 3, N = 5;
	std::vector<std::vector<double>> V (M, std::vector<double>(N, 0.0));

	// 2-D Vector Iterator
	std::vector<std::vector<double>>::const_iterator it_row;
	it_row = V.begin();
	while (it_row != V.end())
	{
		std::vector<double> v = *it_row;
		std::vector<double>::const_iterator it_col;
		it_col = v.begin();
		while (it_col != v.end())
		{
			std::cout << *it_col << " ";
			it_col++;
		}
		std::cout << "\n";
		it_row++;
	}

	return 0;
}