//
// Created by Asus on 16.03.2025.
//
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool Palindrome(const string &aboba) {
    auto aboba1 = aboba;
    reverse(aboba1.begin(), aboba1.end());
    if (aboba1 == aboba) {
        cout << "true";
    } else {
        cout << "false";
    }
    return aboba1 == aboba;
}

auto main() -> int {
    auto hello = "asa";
    Palindrome(hello);
    fmt::println("[]",hello);
}
