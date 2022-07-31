#pragma once

#include "opcode.h"

class JumpIfTrueOpCode : public OpCode
{
public:
    JumpIfTrueOpCode();
    virtual ~JumpIfTrueOpCode() {}
    virtual HaltExecution execute(std::shared_ptr<std::vector<int>> execution_env, std::vector<int>& param_modes, int& current_position);
};
