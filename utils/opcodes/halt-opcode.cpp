#include "halt-opcode.h"
#include <iostream>

HaltOpCode::HaltOpCode()
{

}

OpCode::HaltExecution HaltOpCode::execute(std::vector<int>& execution_env, int& current_position) {
    return OpCode::HaltExecution::Yes;
}
