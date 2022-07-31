#pragma once

#include "utils/opcodes/add-opcode.h"
#include "utils/opcodes/mul-opcode.h"
#include "utils/opcodes/halt-opcode.h"
#include "utils/opcodes/set-opcode.h"
#include "utils/opcodes/out-opcode.h"
#include "utils/opcodes/equals-opcode.h"
#include "utils/opcodes/less-than-opcode.h"
#include "utils/opcodes/jump-if-false-opcode.h"
#include "utils/opcodes/jump-if-true-opcode.h"

class OpCodeService
{
    AddOpCode* add_opcode;
    MulOpCode* mul_opcode;
    HaltOpCode* halt_opcode;
    SetOpCode* set_opcode;
    OutOpCode* out_opcode;
    EqualsOpCode* equals_opcode;
    LessThanOpCode* less_than_opcode;
    JumpIfFalseOpCode* jump_if_false_opcode;
    JumpIfTrueOpCode* jump_if_true_opcode;
public:
    OpCodeService();

    OpCode* get_opcode_by_int(int int_opcode);
};
