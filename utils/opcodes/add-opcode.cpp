#include "add-opcode.h"
#include <iostream>

AddOpCode::AddOpCode()
{

}

OpCode::HaltExecution AddOpCode::execute(std::shared_ptr<std::vector<int>> execution_env, std::vector<int>& param_modes, int& current_position) {
    auto first_arg = execution_env.get()->at(current_position + 1);
    auto second_arg = execution_env.get()->at(current_position + 2);
    auto out_position = execution_env.get()->at(current_position + 3);

    auto val1 = param_modes.size() >= 1 && param_modes.at(0) == 1 ? first_arg : execution_env.get()->at(first_arg);
    auto val2 = param_modes.size() >= 2 && param_modes.at(1) == 1 ? second_arg : execution_env.get()->at(second_arg);

    (*execution_env.get())[out_position] = val1 + val2;

    current_position += 4;

    return OpCode::HaltExecution::No;
}
