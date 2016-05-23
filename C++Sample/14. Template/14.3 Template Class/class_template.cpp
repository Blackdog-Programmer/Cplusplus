// Reference: http://www.learncpp.com/cpp-tutorial/143-template-classes/
//
#include <iostream>

template <class T>
class Array
{
private:
	// Properties
	int length;
	T *list;
public:
	// Constructor
	Array() { length = 0, list = NULL; }
	Array(int n_length) : length(n_length) {
		list = new T[length];
	}
	// Methods
	int size();
	// Destructor
	~Array() { delete[] list; }
	// Oeprator Overload
	T& operator[] (int index) { return list[index]; }
};

template <class T>
int Array<T>::size() { return length; }

int
main(int argc, char *argv[])
{
	int N = 100;
	Array<int> A(N);
	// Initialization
	for (int i = 0; i < N; i++) {
		A[i] = rand() % N;
	}
	// Print List
	for (int i = 0; i < N; i++) {
		std::cout << A[i] << "\n";
	}

	return 0;
}