#pragma once

#include <memory>
#include <string>
#include <vector>

std::vector<int> read_input_numbers(std::string filePath);

std::shared_ptr<std::vector<int>> read_intcode(std::string filePath);
