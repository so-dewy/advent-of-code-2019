#include "halt-opcode.h"
#include <iostream>

HaltOpCode::HaltOpCode()
{

}

OpCode::HaltExecution HaltOpCode::execute(std::shared_ptr<std::vector<int>> execution_env, std::vector<int>& param_modes, int& current_position) {
    return OpCode::HaltExecution::Yes;
}
