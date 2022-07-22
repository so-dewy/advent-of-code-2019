#include "add-opcode.h"
#include <iostream>

AddOpCode::AddOpCode()
{

}

OpCode::HaltExecution AddOpCode::execute(std::shared_ptr<std::vector<int>> execution_env, int& current_position) {
    auto first_arg = execution_env.get()->at(current_position + 1);
    auto second_arg = execution_env.get()->at(current_position + 2);
    auto out_position = execution_env.get()->at(current_position + 3);

    (*execution_env.get())[out_position] = execution_env.get()->at(first_arg) + execution_env.get()->at(second_arg);

    current_position += 4;

    return OpCode::HaltExecution::No;
}
