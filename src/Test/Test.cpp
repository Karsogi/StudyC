#include <iostream>
#include <vector>

auto addElement(std::vector<int> vector) {
    vector.push_back(10);
}

auto main() -> int {
    auto ints = std::vector<int>();
    std::cout << ints.size() << '\n';
    addElement(ints);
    std::cout << ints.size() << '\n';
}

