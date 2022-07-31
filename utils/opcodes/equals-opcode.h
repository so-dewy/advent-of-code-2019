#pragma once

#include "opcode.h"

class EqualsOpCode : public OpCode
{
public:
    EqualsOpCode();
    virtual ~EqualsOpCode() {}
    virtual HaltExecution execute(std::shared_ptr<std::vector<int>> execution_env, std::vector<int>& param_modes, int& current_position);
};
