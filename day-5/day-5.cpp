#include "utils/file-utils.h"
#include "utils/intcodeparser.h"
#include <iostream>


void day5_1() {

    auto intcode_ptr = read_intcode("./day-5/input.txt");

    IntCodeParser parser;

    parser.execute_intcode(intcode_ptr);
}

void day5_2() {

    auto intcode_ptr = read_intcode("./day-5/input-part-2.txt");

    IntCodeParser parser;

    parser.execute_intcode(intcode_ptr);
}