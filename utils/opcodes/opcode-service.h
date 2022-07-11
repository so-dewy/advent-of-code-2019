#ifndef OPCODESERVICE_H
#define OPCODESERVICE_H

#include "utils/opcodes/add-opcode.h"
#include "utils/opcodes/mul-opcode.h"
#include "utils/opcodes/halt-opcode.h"

class OpCodeService
{
    AddOpCode add_opcode;
    MulOpCode mul_opcode;
    HaltOpCode halt_opcode;
public:
    OpCodeService();

    OpCode& get_opcode_by_int(int int_opcode);
};

#endif // OPCODESERVICE_H
