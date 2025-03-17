//
// Created by Asus on 16.03.2025.
//
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

bool suffix(vector<int> &almaz, set<int> &brilliant) {
    auto middle = brilliant.size() / 2;
    auto something = next(brilliant.begin(), middle);
    vector<int> checki(something, brilliant.end());
    if (checki.size() != almaz.size()) {
        return false;
    }
    for (auto i = 0; i < almaz.size(); ++i) {
        if (almaz[i] != checki[i]) {
            return false;
        }
    }
    return true;
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
    auto ymnii = vector<int>{ 6, 7, 9,10};//1, 7, 10, 4, 5, 6, 9, 9
    auto ymnica = set<int>{1, 7, 10, 4, 5, 6,  9};
    cout << suffix(ymnii, ymnica);
}