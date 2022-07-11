#include "intcodeparser.h"
#include "opcodes/opcode-service.h"

IntCodeParser::IntCodeParser() {};

void IntCodeParser::execute_opcode(std::vector<int>& execution_env, int opcode) {

}

OpCode& IntCodeParser::get_opcode(std::vector<int>& intcode) {
    auto int_opcode = intcode.at(current_position);
    OpCodeService opcode;
    OpCode& ref = opcode.get_opcode_by_int(int_opcode);

    ref.execute(intcode, current_position);
    return opcode.get_opcode_by_int(int_opcode);
}

std::vector<int>& IntCodeParser::execute_intcode(std::vector<int>& intcode) {
    auto &opcode = get_opcode(intcode);
    opcode.execute(intcode, current_position);
    return intcode;
}
