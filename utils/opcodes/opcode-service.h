#pragma once

#include "utils/opcodes/add-opcode.h"
#include "utils/opcodes/mul-opcode.h"
#include "utils/opcodes/halt-opcode.h"
#include "utils/opcodes/set-opcode.h"
#include "utils/opcodes/out-opcode.h"

class OpCodeService
{
    AddOpCode* add_opcode;
    MulOpCode* mul_opcode;
    HaltOpCode* halt_opcode;
    SetOpCode* set_opcode;
    OutOpCode* out_opcode;
public:
    OpCodeService();

    OpCode* get_opcode_by_int(int int_opcode);
};
