#include "utils/file-utils.h"
#include "utils/intcodeparser.h"
#include <iostream>


void day2_1() {
    auto intcode = read_intcode("./day-2/input.txt");

    IntCodeParser parser;

    intcode[1] = 12;
    intcode[2] = 2;

    parser.execute_intcode(intcode);

    std::cout << intcode.at(0) << std::endl;
}
