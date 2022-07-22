#include "file-utils.h"
#include <iostream>
#include <fstream>
#include <memory>

std::vector<std::string> split(const std::string &str, const std::string &delimeter) {
    std::vector<std::string> result;

    size_t found = str.find(delimeter);
    size_t startIndex = 0;

    while(found != std::string::npos) {
        result.push_back(std::string(str.begin()+startIndex, str.begin()+found));
        startIndex = found + delimeter.size();
        found = str.find(delimeter, startIndex);
    }
    if(startIndex != str.size())
        result.push_back(std::string(str.begin()+startIndex, str.end()));
    return result;
}

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

std::shared_ptr<std::vector<int>> read_intcode(std::string filePath) {
    std::shared_ptr<std::vector<int>> opcodes = std::make_shared<std::vector<int>>();
    std::ifstream infile(filePath);
    std::string line;

    if (infile.is_open()) {
        while (getline(infile, line)) {
            auto vec = split(line, ",");
            for (const auto &str : vec) {
                auto opcode = std::stoi(str);
                opcodes.get()->push_back(opcode);
            }
        }
        infile.close();
    }
    else {
        std::cout << "Unable to open file" << std::endl;
    }

    return opcodes;
}
