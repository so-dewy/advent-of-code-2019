#ifndef MULOPCODE_H
#define MULOPCODE_H

#include "opcode.h"

class MulOpCode : public OpCode
{
public:
    MulOpCode();
    virtual ~MulOpCode() {}
    virtual void execute(std::vector<int>& execution_env, int current_position);
};

#endif // MULOPCODE_H
