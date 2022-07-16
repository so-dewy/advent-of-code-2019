#ifndef INTCODEPARSER_H
#define INTCODEPARSER_H
#include "utils/opcodes/opcode.h"
#include <vector>

class IntCodeParser {
    int current_position = 0;
public:
    IntCodeParser();

    std::vector<int>& execute_intcode(std::vector<int>& intcode);
private:
    void execute_opcode(std::vector<int>& execution_env, int opcode);

    OpCode* get_opcode(std::vector<int>& intcode);
};

#endif // INTCODEPARSER_H
