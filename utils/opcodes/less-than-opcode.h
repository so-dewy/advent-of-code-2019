#pragma once

#include "opcode.h"

class LessThanOpCode : public OpCode
{
public:
    LessThanOpCode();
    virtual ~LessThanOpCode() {}
    virtual HaltExecution execute(std::shared_ptr<std::vector<int>> execution_env, std::vector<int>& param_modes, int& current_position);
};
