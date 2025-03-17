//
// Created by Asus on 16.03.2025.
//
#include <iostream>
#include <vector>
#include <set>

using namespace std;

void IteratingOver(const set<int> &attack, const int &n)
{
    if (attack.empty()) return;
    
    auto current = attack.begin();
    auto i = 0;

    auto lastElement = *std::prev(attack.end());
    while (*current != lastElement && i < 10)
    {
        // cout << distance(current, attack.end()) << ' ' << n << '\n';
        cout << *current << '\n';
        current = next(current, n);
        ++i;   
    }
    
    cout << *current << '\n';
    
    // do {
    //     cout << distance(current, attack.end()) << ' ' << n << '\n';
    //     cout << *current << '\n';
    //     current = next(current, n);
    //     ++i;
    //     } while (distance(current, attack.end()) > n && i < 10);
}

void IteratingOver(const vector<int> &attack, const int &n) {
    auto current = attack.begin();
    while (current < attack.end()) {
        cout << *current << '\n';
        current = current + n;
    }
}

// overloading

auto main() -> int {
    auto n = int();
    cout << "Describe your n" << "\n";
    cin >> n;
    auto titan = vector<int>{1, 2, 3, 5, 6};
    auto rozenMaiden = set<int>{1, 6, 5, 2, 9, 10, 3};
    IteratingOver(titan, n);
    cout << '\n';
    IteratingOver(rozenMaiden, n);
}