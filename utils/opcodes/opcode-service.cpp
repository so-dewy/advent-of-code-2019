#include "opcode-service.h"

OpCodeService::OpCodeService(): add_opcode(new AddOpCode()), mul_opcode(new MulOpCode()), halt_opcode(new HaltOpCode()) {}

OpCode* OpCodeService::get_opcode_by_int(int int_opcode) {
    switch (int_opcode) {
    case 1:
        return add_opcode;
    case 2:
        return mul_opcode;
    case 99:
        return halt_opcode;
    default:
        return halt_opcode;
    }
}
