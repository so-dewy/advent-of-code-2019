#include "mul-opcode.h"
#include <iostream>

MulOpCode::MulOpCode()
{

}

OpCode::HaltExecution MulOpCode::execute(std::vector<int>& execution_env, int& current_position) {
    auto first_arg = execution_env.at(current_position + 1);
    auto second_arg = execution_env.at(current_position + 2);
    auto out_position = execution_env[current_position + 3];

    execution_env[out_position] = execution_env.at(first_arg) * execution_env.at(second_arg);

    current_position += 4;

    return OpCode::HaltExecution::No;
}
