#pragma once

#include "opcode.h"

class HaltOpCode : public OpCode
{
public:
    HaltOpCode();
    virtual ~HaltOpCode() {}
    virtual HaltExecution execute(std::shared_ptr<std::vector<int>> execution_env, int& current_position);
};
