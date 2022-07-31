#include "opcode-service.h"

OpCodeService::OpCodeService(): 
    add_opcode(new AddOpCode()), mul_opcode(new MulOpCode()), halt_opcode(new HaltOpCode()), 
    set_opcode(new SetOpCode()), out_opcode(new OutOpCode()), jump_if_true_opcode(new JumpIfTrueOpCode()),
    jump_if_false_opcode(new JumpIfFalseOpCode()), less_than_opcode(new LessThanOpCode()), equals_opcode(new EqualsOpCode()) {}

OpCode* OpCodeService::get_opcode_by_int(int int_opcode) {
    switch (int_opcode) {
    case 1:
        return add_opcode;
    case 2:
        return mul_opcode;
    case 3:
        return set_opcode;
    case 4:
        return out_opcode;
    case 5:
        return jump_if_true_opcode;
    case 6:
        return jump_if_false_opcode;
    case 7:
        return less_than_opcode;
    case 8:
        return equals_opcode;
    case 99:
        return halt_opcode;
    default:
        return halt_opcode;
    }
}
