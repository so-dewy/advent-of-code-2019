#ifndef HALTOPCODE_H
#define HALTOPCODE_H

#include "opcode.h"

class HaltOpCode : public OpCode
{
public:
    HaltOpCode();
    virtual ~HaltOpCode() {}
    virtual HaltExecution execute(std::vector<int>& execution_env, int& current_position);
};

#endif // HALTOPCODE_H
