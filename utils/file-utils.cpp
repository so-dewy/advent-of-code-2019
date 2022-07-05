#include "file-utils.h"
#include <iostream>
#include <fstream>

std::vector<int> read_input_numbers(std::string filePath) {
    std::vector<int> numbers;
    std::ifstream infile(filePath);
    std::string line;

    if (infile.is_open()) {
        while (getline(infile, line)) {
            auto number = std::stoi(line);
            numbers.push_back(number);
        }
        infile.close();
    }
    else {
        std::cout << "Unable to open file" << std::endl;
    }

    return numbers;
}
