#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>

bool check_if_password(int number) {
    bool two_digits_same = false;
    bool digits_never_decrease = true;

    int previous_digit = INT_MAX;
    while (number > 0) {
        int current_digit = number % 10;

        if (current_digit == previous_digit) {
            two_digits_same = true;
        }

        if (current_digit > previous_digit) {
            digits_never_decrease = false;
        }

        number /= 10;
        previous_digit = current_digit;
    }
    return two_digits_same && digits_never_decrease;
}

void day4_1() {
    int range_start = 123257;
    int range_end = 647015;
    std::vector<int> passwords;

    for (int i = range_start; i <= range_end; i++) {
        auto is_password = check_if_password(i);
        if (is_password) {
            passwords.push_back(i);
        }
    }

    for (auto it : passwords) {
        std::cout << it << std::endl;
    }

    std::cout << "Password candidates count: " << passwords.size() << std::endl;
}

bool check_if_password2(int number) {
    int same_digit_streak = 1;
    std::unordered_map<int, int> digit_map;
    bool has_two_digit_streak = false;
    bool digits_never_decrease = true;

    while (number > 0) {
        int current_digit = number % 10;
        int next_digit = (number / 10) % 10;
        if (next_digit == current_digit) {
            digit_map[current_digit]++;
        }

        if (next_digit > current_digit) {
            digits_never_decrease = false;
        }

        number /= 10;
    }
    for (const auto& [key, value] : digit_map) {
        if (value == 1) {
            has_two_digit_streak = true;
        }
    }

    return has_two_digit_streak && digits_never_decrease;
}

void day4_2() {
    int range_start = 123257;
    int range_end = 647015;
    std::vector<int> passwords;

    for (int i = range_start; i <= range_end; i++) {
        auto is_password = check_if_password2(i);
        if (is_password) {
            passwords.push_back(i);
        }
    }

    for (auto it : passwords) {
        std::cout << it << std::endl;
    }
    std::cout << "Password candidates count: " << passwords.size() << std::endl;
}
