#include "set-opcode.h"
#include <iostream>

SetOpCode::SetOpCode()
{

}

OpCode::HaltExecution SetOpCode::execute(std::shared_ptr<std::vector<int>> execution_env, std::vector<int>& param_modes, int& current_position) {
    auto first_arg = execution_env.get()->at(current_position + 1);

    int input;
    std::cin >> input;

    (*execution_env.get())[first_arg] = input;

    current_position += 2;

    return OpCode::HaltExecution::No;
}
