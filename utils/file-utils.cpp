#include "file-utils.h"
#include <iostream>
#include <fstream>
#include <memory>

using std::unique_ptr;
using std::vector;
using std::string;
using std::shared_ptr;

unique_ptr<vector<string>> split(const string &str, const string &delimeter) {
    unique_ptr<vector<string>> result = std::make_unique<vector<string>>();

    size_t found = str.find(delimeter);
    size_t startIndex = 0;

    while(found != string::npos) {
        result.get()->push_back(string(str.begin()+startIndex, str.begin()+found));
        startIndex = found + delimeter.size();
        found = str.find(delimeter, startIndex);
    }
    if(startIndex != str.size())
        result.get()->push_back(string(str.begin()+startIndex, str.end()));
    return std::move(result);
}

vector<int> read_input_numbers(string filePath) {
    vector<int> numbers;
    std::ifstream infile(filePath);
    string line;

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

shared_ptr<vector<int>> read_intcode(string filePath) {
    shared_ptr<vector<int>> opcodes = std::make_shared<vector<int>>();
    std::ifstream infile(filePath);
    string line;

    if (infile.is_open()) {
        while (getline(infile, line)) {
            auto vec = *split(line, ",").get();
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

unique_ptr<vector<unique_ptr<vector<string>>>> read_wires(string filePath) {
    unique_ptr<vector<unique_ptr<vector<string>>>> wires =
            std::make_unique<vector<unique_ptr<vector<string>>>>();

    std::ifstream infile(filePath);
    string line;

    if (infile.is_open()) {
        while (getline(infile, line)) {
            auto vec = split(line, ",");
            wires.get()->push_back(std::move(vec));
        }
        infile.close();
    }
    else {
        std::cout << "Unable to open file" << std::endl;
    }

    return std::move(wires);
}
