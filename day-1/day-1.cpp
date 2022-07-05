#include "../utils/file-utils.h"
#include <cmath>
#include <iostream>
#include <iomanip>

double day1_1() {
    auto numbers = read_input_numbers("./day-1/input.txt");
    double totalFuel = 0;
    for (auto number : numbers) {
        totalFuel += std::floor(static_cast<double>(number) / 3) - 2;

        std::cout << number << '\n';
    }
    std::cout << "Total fuel: " << std::fixed << std::setprecision(0) << totalFuel << '\n';

    return totalFuel;
}


void day1_2() {
    auto totalModuleFuel = day1_1();
    double totalFuel = 0;
}
