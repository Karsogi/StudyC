//
// Created by Administrator on 07.03.2025.
//

#include <iostream>
#include <vector>

auto addElement(std::vector<int>& vector)
{
    vector.push_back(10);
}

auto main() -> int {
    auto vec = std::vector{1, 2, 3};
    std::cout << vec.size() << '\n';
    // const auto modifiedVector = addElement(vec);
    addElement(vec);
    std::cout << vec.size() << '\n';
    // std::cout << modifiedVector.size() << '\n';
}
