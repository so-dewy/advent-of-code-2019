#include "opcode-service.h"

OpCodeService::OpCodeService(): add_opcode(new AddOpCode()), mul_opcode(new MulOpCode()), halt_opcode(new HaltOpCode()), set_opcode(new SetOpCode()), out_opcode(new OutOpCode()) {}

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
    case 99:
        return halt_opcode;
    default:
        return halt_opcode;
    }
}
