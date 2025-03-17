//
// Created by Asus on 16.03.2025.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

auto main () -> int {
    auto scores = vector<double>();
    auto n = 0.0;
    for (auto i = 0; i < 7; ++i) {
        cin >> n;
        scores.push_back(n);
    }
    sort(scores.begin(), scores.end());
    for (auto score : scores) {
        cout << score << '\n';
    }
    scores.erase(scores.begin());
    scores.erase(scores.end()-1);
    for (auto score : scores) {
        cout << score;
    }
}