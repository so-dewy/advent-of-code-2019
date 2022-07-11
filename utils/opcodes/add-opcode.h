#ifndef ADDOPCODE_H
#define ADDOPCODE_H

#include "opcode.h"

class AddOpCode : public OpCode
{
public:
    AddOpCode();
    virtual ~AddOpCode() {}
    virtual void execute(std::vector<int>& execution_env, int current_position);
};

#endif // ADDOPCODE_H
