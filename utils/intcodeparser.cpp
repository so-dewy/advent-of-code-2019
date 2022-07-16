#include "intcodeparser.h"
#include "opcodes/opcode-service.h"
#include "iostream"

IntCodeParser::IntCodeParser() {};

void IntCodeParser::execute_opcode(std::vector<int>& execution_env, int opcode) {

}

OpCode* IntCodeParser::get_opcode(std::vector<int>& intcode) {
    auto int_opcode = intcode.at(current_position);
    OpCodeService opcode;
    return opcode.get_opcode_by_int(int_opcode);
}

std::vector<int>& IntCodeParser::execute_intcode(std::vector<int>& intcode) {
    while (true) {
        auto* opcode = get_opcode(intcode);
        auto shouldHalt = opcode->execute(intcode, current_position);
        if (shouldHalt == OpCode::HaltExecution::Yes) {
            break;
        }
        std::cout << std::endl;
    }
    return intcode;
}
