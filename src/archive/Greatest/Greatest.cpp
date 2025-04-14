//
// Created by Asus on 16.03.2025.
//
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <ranges>
using namespace std;

bool suffix(vector<int> &almaz, set<int> &brilliant) {
    if (brilliant.size() < almaz.size()) return false;
    const auto lowerBound = std::next(brilliant.begin(), brilliant.size() - almaz.size());
    return std::equal(lowerBound, brilliant.end(), almaz.begin(), almaz.end());

}
//      auto found = almaz.begin();
//    for (auto i = something; i != brilliant.end(); i++) {
//        int valueset = *i;
//        auto found = find(almaz.begin(),almaz.end(),valueset);
//        if (found == almaz.end()){
//            return true;
//        }
//        while (found!=)
//        found++;
//    }


auto main() -> int {
    auto ymnii = vector<int>{5. 6, 7, 9,10};//1, 7, 10, 4, 5, 6, 9, 9
    auto ymnica = set<int>{1, 7, 10, 4, 5, 6,  9};
    cout << suffix(ymnii, ymnica);
    ranges::sort(ymnii);

}