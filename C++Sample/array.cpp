#include <iostream>
#include <array>

void changeArray(std::array<int, 5> A) {

	for (auto &element : A)
		element = 0;
}

int main(int argc, char *argv[]) 
{
	std::array<std::array<int, 5>, 5> mat;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			std::cout << mat[i][j] << " ";
		}
		std::cout << "\n";
	}

/*
	std::array<int, 5> A = { 0, 1, 2, 3, 4}; // Initialize List

	// Before
	std::cout << "Before\n";
	for (auto &element : A)
		std::cout << element << " ";
	std::cout << std::endl;

	// Execution
	changeArray(A);

	// After
	std::cout << "After\n";
	for (auto &element : A)
		std::cout << element << " ";
	std::cout << std::endl;
*/
	return 0;
}