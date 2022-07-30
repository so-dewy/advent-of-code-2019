#include "out-opcode.h"
#include <iostream>

OutOpCode::OutOpCode()
{

}

OpCode::HaltExecution OutOpCode::execute(std::shared_ptr<std::vector<int>> execution_env, std::vector<int>& param_modes, int& current_position) {
    auto first_arg = execution_env.get()->at(current_position + 1);

    auto val1 = param_modes.size() >= 1 && param_modes.at(0) == 1 ? first_arg : execution_env.get()->at(first_arg);
    std::cout << val1 << std::endl;

    current_position += 2;

    return OpCode::HaltExecution::No;
}
