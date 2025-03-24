//
// Created by Asus on 23.03.2025.
//
#include <vector>
#include "fmt/ranges.h"


auto main() -> int {
    auto numbers = std::vector<int>{1, 2, 3, 4, 5, 6, 7};

    fmt::println("{}", numbers);

    numbers.erase(numbers.begin()); // removing the first element

    fmt::println("{}", numbers);

    numbers.erase(numbers.end() - 1); // removing the last element

    fmt::println("{}", numbers);

    numbers.erase(numbers.begin() + 1, numbers.begin() + 3);

    fmt::println("{}", numbers);

}