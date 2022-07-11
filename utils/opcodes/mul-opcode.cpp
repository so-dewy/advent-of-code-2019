#include "mul-opcode.h"
#include <iostream>

MulOpCode::MulOpCode()
{

}

void MulOpCode::execute(std::vector<int>& execution_env, int current_position) {
    std::cout << "MulOpCode::execute()" << std::endl;
}
