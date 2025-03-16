//
// Created by Asus on 16.03.2025.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

auto main () -> int {
    vector scores = vector<int>();
    auto n = 0;
    for (int i = 0; i < 7; ++i) {
        cin >> n;
        scores.push_back(n);
    }
    sort(scores.begin(), scores.end());
    for (int score : scores) {
        cout << score << '\n';
    }
    scores.erase(scores.begin());
    scores.erase(scores.end()-1);
    for (int score : scores) {
        cout << score;
    }
}