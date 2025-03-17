//
// Created by Asus on 16.03.2025.
//
#include <iostream>
#include <vector>
#include <set>

using namespace std;

void IteratingOver(const vector<int> &attack, const int &n) {
    auto current = attack.begin();
    while (current < attack.end()) {
        cout << *current << '\n';
        current = current + n;
    }
}

void IteratingOverSet(const set<int> &attack, const int &n) {
    auto current = attack.begin();
    while (current != attack.end()) {
            cout << *current << '\n';
        current = next(current, n);
    }
}

auto main() -> int {
    auto n = int();
    cout << "Describe your n" << "\n";
    cin >> n;
    auto titan = vector<int>{1, 2, 3, 5, 6};
    auto rozenMaiden = set<int>{1, 6, 5, 2, 9, 10, 3};
    IteratingOver(titan, n);
    IteratingOverSet(rozenMaiden, n);
}