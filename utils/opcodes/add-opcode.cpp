#include "add-opcode.h"
#include <iostream>

AddOpCode::AddOpCode()
{

}

void AddOpCode::execute(std::vector<int>& execution_env, int current_position) {
    std::cout << "AddOpCode::execute()" << std::endl;
}
