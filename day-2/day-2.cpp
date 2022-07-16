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

void day2_2() {
    for (int i = 0; i <= 99; i++) {
        for (int j = 0; j <= 99; j++) {
            auto intcode = read_intcode("./day-2/input.txt");

            IntCodeParser parser;

            intcode[1] = i;
            intcode[2] = j;

            parser.execute_intcode(intcode);

            if (intcode.at(0) == 19690720) {
                std::cout << intcode.at(0) << std::endl;

                for (const auto it: intcode) {
                    std::cout << it << ", ";
                }
                std::cout << std::endl;
            }
        }
    }
}

