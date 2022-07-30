#pragma once

#include "opcode.h"

class AddOpCode : public OpCode
{
public:
    AddOpCode();
    virtual ~AddOpCode() {}
    virtual HaltExecution execute(std::shared_ptr<std::vector<int>> execution_env, std::vector<int>& param_modes, int& current_position);
};
