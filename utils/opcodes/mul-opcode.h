#pragma once

#include "opcode.h"

class MulOpCode : public OpCode
{
public:
    MulOpCode();
    virtual ~MulOpCode() {}
    virtual HaltExecution execute(std::shared_ptr<std::vector<int>> execution_env, std::vector<int>& param_modes, int& current_position);
};
