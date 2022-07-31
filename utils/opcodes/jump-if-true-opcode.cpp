#include "jump-if-true-opcode.h"
#include <iostream>

JumpIfTrueOpCode::JumpIfTrueOpCode()
{

}

OpCode::HaltExecution JumpIfTrueOpCode::execute(std::shared_ptr<std::vector<int>> execution_env, std::vector<int>& param_modes, int& current_position) {
    auto first_arg = execution_env.get()->at(current_position + 1);
    auto second_arg = execution_env.get()->at(current_position + 2);

    auto val1 = param_modes.size() >= 1 && param_modes.at(0) == 1 ? first_arg : execution_env.get()->at(first_arg);
    auto val2 = param_modes.size() >= 2 && param_modes.at(1) == 1 ? second_arg : execution_env.get()->at(second_arg);

    if (val1 != 0) {
        current_position = val2;
    } else {
        current_position += 3;
    }

    return OpCode::HaltExecution::No;
}
