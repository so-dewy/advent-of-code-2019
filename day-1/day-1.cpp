#include "../utils/file-utils.h"
#include <cmath>
#include <iostream>
#include <iomanip>

double calculateFuel(int mass) {
    return std::floor(static_cast<double>(mass) / 3) - 2;
}

double calcFuelForVector(std::vector<int> masses, int fuelAcc) {
    if (masses.empty()) {
        return fuelAcc;
    }

    std::vector<int> vec;
    auto fuel = fuelAcc;

    for (auto mass : masses) {
        auto fuelForMass = calculateFuel(mass);
        if (fuelForMass > 0) {
            fuel += fuelForMass;
            vec.push_back(fuelForMass);
        }
    }

    return calcFuelForVector(vec, fuel);
}

void day1_1() {
    auto numbers = read_input_numbers("./day-1/input.txt");
    double totalFuel = 0;
    for (auto number : numbers) {
        totalFuel += calculateFuel(number);
    }
    std::cout << "Total fuel: " << std::fixed << std::setprecision(0) << totalFuel << '\n';
}

void day1_2() {
    auto numbers = read_input_numbers("./day-1/input.txt");
    auto totalFuel = calcFuelForVector(numbers, 0);
    std::cout << "Total fuel (fuel itself accounted for): " << std::fixed << std::setprecision(0) << totalFuel << '\n';
}
