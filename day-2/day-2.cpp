#include "utils/file-utils.h"
#include "utils/intcodeparser.h"
#include <iostream>

void day2_1() {
    auto intcode_ptr = read_intcode("./day-2/input.txt");

    IntCodeParser parser;

    (*intcode_ptr.get())[1] = 12;
    (*intcode_ptr.get())[2] = 2;

    parser.execute_intcode(intcode_ptr);

    std::cout << intcode_ptr.get()->at(0) << std::endl;
}

void day2_2() {
    for (int i = 0; i <= 99; i++) {
        for (int j = 0; j <= 99; j++) {
            auto intcode = read_intcode("./day-2/input.txt");

            IntCodeParser parser;

            (*intcode.get())[1] = i;
            (*intcode.get())[2] = j;

            parser.execute_intcode(intcode);

            if (intcode.get()->at(0) == 19690720) {
                std::cout << intcode.get()->at(0) << std::endl;

                for (const auto it: (*intcode.get())) {
                    std::cout << it << ", ";
                }
                std::cout << std::endl;
            }
        }
    }
}

