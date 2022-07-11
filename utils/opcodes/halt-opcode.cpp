#include "halt-opcode.h"
#include <iostream>

HaltOpCode::HaltOpCode()
{

}

void HaltOpCode::execute(std::vector<int>& execution_env, int current_position) {
    std::cout << "HaltOpCode::execute()" << std::endl;
}
