#include "halt-opcode.h"
#include <iostream>

HaltOpCode::HaltOpCode()
{

}

OpCode::HaltExecution HaltOpCode::execute(std::vector<int>& execution_env, int& current_position) {
    std::cout << "HaltOpCode::execute()" << std::endl;
    return OpCode::HaltExecution::Yes;
}
