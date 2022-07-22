#include "utils/file-utils.h"
#include "utils/intcodeparser.h"
#include <iostream>

using std::vector;

void day3_1() {
    auto wires = read_wires("./day-3/input.txt");

    vector<vector<int>> matrix(100, vector<int>(100));

    std::cout << wires.get()->at(0) << std::endl;
}
