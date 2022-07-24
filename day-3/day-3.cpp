#include "utils/file-utils.h"
#include "utils/intcodeparser.h"
#include <iostream>

using std::vector;
using std::cout;
using std::endl;
using std::unique_ptr;
using std::string;
using std::shared_ptr;

void print_matrix(vector<vector<int>>& matrix, int x, int y) {
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            string character;
            switch (matrix[i][j]) {
                case 0:
                    character = ".";
                    break;
                case -1:
                    character = "X";
                    break;
                default:
                    character = std::to_string(matrix[i][j]);
                    break;
            }
            cout << character;
        }
        cout << endl;
    }
}

void fill_wire_direction(vector<vector<int>>& matrix, string wire_direction, vector<std::pair<int, int>>& wire_intersections, int& x, int& y, int fill_number) {
    auto direction = wire_direction[0];
    auto move_count = std::stoi(wire_direction.substr(1));
    cout << wire_direction << endl;

    for (int i = 0; i < move_count; i++) {
        switch (direction) {
            case 'U':
                y -= 1;
                break;
            case 'D':
                y += 1;
                break;
            case 'R':
                x += 1;
                break;
            case 'L':
                x -= 1;
                break;
            default:
                break;
        }
        if (matrix[y][x] != 0) {
            wire_intersections.push_back(std::pair<int, int>(y, x));
            matrix[y][x] = -1;
        } else {
            matrix[y][x] = fill_number;
        }
    }
}

int find_closest_intersection(vector<vector<int>>& matrix, unique_ptr<vector<unique_ptr<vector<string>>>> wires, int midX, int midY) {
    vector<std::pair<int, int>> wire_intersections;
    int fill_number = 1;
    matrix[midY][midX] = fill_number;

    for(auto const& wire : *(wires.get())) {
        fill_number++;
        int x = midX;
        int y = midY;
        cout << endl;
        cout << "new wire, starting position " << x << ", " << y << endl;
        for(auto const& wire_direction : *(wire.get())) {
            fill_wire_direction(matrix, wire_direction, wire_intersections, x, y, fill_number);
//            print_matrix(matrix, matrix.size(), matrix.at(0).size());
        }
    }

    int closest_distance = INT_MAX;
    for (auto const& wire_intersection : wire_intersections) {
        if (wire_intersection.first == midY && wire_intersection.second == midX) { continue; }

        int distance = std::abs(wire_intersection.second - midX) + std::abs(wire_intersection.first - midY);

        if (distance < closest_distance) {
            closest_distance = distance;
        }
    }

    return closest_distance;
}

void day3_1() {
    auto wires = read_wires("./day-3/input.txt");

    int x = 1500;
    int y = 1500;
    int midX = x / 2;
    int midY = y / 2;
    vector<vector<int>> matrix(y, vector<int>(x));

    auto closest_distance = find_closest_intersection(matrix, std::move(wires), midX, midY);

//    print_matrix(matrix, y, x);

    cout << "Closest intersection distance: " << closest_distance << endl;
}
