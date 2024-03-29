#pragma once

#include "opcode.h"

class HaltOpCode : public OpCode
{
public:
    HaltOpCode();
    virtual ~HaltOpCode() {}
    virtual HaltExecution execute(std::shared_ptr<std::vector<int>> execution_env, std::vector<int>& param_modes, int& current_position);
};
