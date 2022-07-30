#pragma once

#include "opcode.h"

class SetOpCode : public OpCode
{
public:
    SetOpCode();
    virtual ~SetOpCode() {}
    virtual HaltExecution execute(std::shared_ptr<std::vector<int>> execution_env, std::vector<int>& param_modes, int& current_position);
};