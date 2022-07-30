#include "intcodeparser.h"
#include "opcodes/opcode-service.h"
#include "iostream"
#include <memory>

IntCodeParser::IntCodeParser() {};

void IntCodeParser::execute_opcode(std::shared_ptr<std::vector<int>> execution_env, int opcode) {

}

std::vector<int> IntCodeParser::get_param_modes(int int_opcode) {
    std::vector<int> vec;

    if (int_opcode < 100) return vec;

    int_opcode /= 100;

    while (int_opcode > 0) {
        int current_digit = int_opcode % 10;

        vec.push_back(current_digit);

        int_opcode /= 10;
    }

    return vec;
}

OpCode* IntCodeParser::get_opcode(int int_opcode) {
    OpCodeService opcode;
    return opcode.get_opcode_by_int(int_opcode);
}

std::shared_ptr<std::vector<int>> IntCodeParser::execute_intcode(std::shared_ptr<std::vector<int>> intcode) {
    while (true) {
        auto int_opcode = intcode.get()->at(current_position);
        auto* opcode = get_opcode(int_opcode > 100 ? int_opcode % 100 : int_opcode);
        auto param_modes = get_param_modes(int_opcode);

        auto shouldHalt = opcode->execute(intcode, param_modes, current_position);
        if (shouldHalt == OpCode::HaltExecution::Yes) {
            break;
        }
    }
    return intcode;
}
