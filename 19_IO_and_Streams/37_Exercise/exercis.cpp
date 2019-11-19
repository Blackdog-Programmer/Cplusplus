#include <iostream>
#include <fstream>

void read_file(std::string file_name) {
    //---- YOU WRITE YOUR CODE BELOW THIS LINE----
    std::ifstream in(file_name, std::ios::in);
    if (!in.is_open()) {
        std::cerr << "Error opening file" << std::endl;
    }
    std::string word;
    while (in >> word) {
        std::cout << word << std::endl;
    }
    in.close();
    //---- YOU WRITE YOUR CODE ABOVE THIS LINE----
}