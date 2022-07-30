#pragma once
#include "utils/opcodes/opcode.h"
#include <memory>
#include <vector>

class IntCodeParser {
    int current_position = 0;
public:
    IntCodeParser();

    std::shared_ptr<std::vector<int>> execute_intcode(std::shared_ptr<std::vector<int>> intcode);
private:
    void execute_opcode(std::shared_ptr<std::vector<int>> execution_env, int opcode);

    OpCode* get_opcode(int int_opcode);

    std::vector<int> get_param_modes(int int_opcode);
};
