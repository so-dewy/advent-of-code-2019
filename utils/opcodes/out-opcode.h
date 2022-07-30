#pragma once

#include "opcode.h"

class OutOpCode : public OpCode
{
public:
    OutOpCode();
    virtual ~OutOpCode() {}
    virtual HaltExecution execute(std::shared_ptr<std::vector<int>> execution_env, std::vector<int>& param_modes, int& current_position);
};