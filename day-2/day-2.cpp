#include "utils/file-utils.h"
#include "utils/intcodeparser.h"
#include <iostream>


void day2_1() {
    auto intcode = read_intcode("./day-2/input.txt");

    IntCodeParser parser;

    parser.execute_intcode(intcode);
}
