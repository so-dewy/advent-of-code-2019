#include "utils/file-utils.h"
#include "utils/intcodeparser.h"
#include <iostream>


void day5_1() {

    auto intcode_ptr = read_intcode("./day-5/input.txt");

    IntCodeParser parser;

    parser.execute_intcode(intcode_ptr);
}