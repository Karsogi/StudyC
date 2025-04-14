//
// Created by Asus on 16.03.2025.
//
#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

int DotProduct(vector<int> &vaski, vector<int> &elisabethy) {
    assert(vaski.size() == elisabethy.size());
    cout << "Comerade assertion has passed!" << '\n';
//    for (int i = 0; i < vaski.size(); ++i) {
//        for (int j = 0; j < 1; ++j) {
    auto count = 0;
    auto a = 0;
    auto b = 0;
    while (count != vaski.size()) {
        a = vaski[count] * elisabethy[count];
        a > 0 ? b = b + a : b = b - a;
        count++;
    }
    return b;
//        }
//    }
}


auto main() -> int {
    vector<int> vasyan;
    auto n = 0;
    cout << "Lomerade we need 3 numbers" << '\n';
    for (auto i = 0; i < 3; ++i) {
        cin >> n;
        vasyan.push_back(n);
    }
    vector<int> elisabeth;
    cout << "Komerade we need 3 numbers" << '\n';
    for (auto i = 0; i < 3; ++i) {
        cin >> n;
        elisabeth.push_back(n);
    }
    cout << DotProduct(vasyan, elisabeth);
}