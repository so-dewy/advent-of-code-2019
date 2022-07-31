#pragma once

#include "opcode.h"

class JumpIfFalseOpCode : public OpCode
{
public:
    JumpIfFalseOpCode();
    virtual ~JumpIfFalseOpCode() {}
    virtual HaltExecution execute(std::shared_ptr<std::vector<int>> execution_env, std::vector<int>& param_modes, int& current_position);
};
