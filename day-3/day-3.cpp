#include "utils/file-utils.h"
#include "utils/intcodeparser.h"
#include <iostream>

void day3_1() {
    read_intcode("./day-2/input.txt");
    std::shared_ptr<std::vector<int>> intcode_ptr = read_intcode("./day-2/input.txt");
    auto intcode = *intcode_ptr.get();

    IntCodeParser parser;

    intcode[1] = 12;
    intcode[2] = 2;

    parser.execute_intcode(intcode_ptr);

    std::cout << intcode.at(0) << std::endl;
}
