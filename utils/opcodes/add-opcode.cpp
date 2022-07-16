#include "add-opcode.h"
#include <iostream>

AddOpCode::AddOpCode()
{

}

OpCode::HaltExecution AddOpCode::execute(std::vector<int>& execution_env, int& current_position) {
    std::cout << "AddOpCode::execute()" << std::endl;
    std::cout << "Execution env before: " << std::endl;
    for (const auto it: execution_env) {
        std::cout << it << ", ";
    }
    std::cout << std::endl;

    auto first_arg = execution_env.at(current_position + 1);
    auto second_arg = execution_env.at(current_position + 2);
    auto out_position = execution_env[current_position + 3];

    execution_env[out_position] = execution_env.at(first_arg) + execution_env.at(second_arg);

    std::cout << "Execution env after: " << std::endl;
    for (const auto it: execution_env) {
        std::cout << it << ", ";
    }
    std::cout << std::endl;
    current_position += 4;

    return OpCode::HaltExecution::No;
}
