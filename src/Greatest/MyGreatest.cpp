//
// Created by Administrator on 16.03.2025.
//
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <ranges>

using namespace std;

bool suffix(const vector<int>& tail, const set<int>& elements)
{
    // for (auto it = elements.begin(); it != elements.end(); ++it)
    // {
    //     cout << *it;
    // }
    if (elements.size() < tail.size()) return false;
    const auto lowerBound = std::next(elements.begin(), elements.size() - tail.size());
    return std::ranges::equal(std::ranges::subrange(lowerBound, elements.end()), tail);
}

auto main() -> int
{
    cout << suffix({5, 6, 7, 8}, {});
}
