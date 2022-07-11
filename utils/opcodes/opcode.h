#ifndef OPCODE_H
#define OPCODE_H

#include <vector>

class OpCode
{
public:
    virtual ~OpCode() {}
    virtual void execute(std::vector<int>& execution_env, int current_position) = 0;
};

#endif // OPCODE_H
