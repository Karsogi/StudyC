//
// Created by Asus on 9.03.2025.
//
#include <thread>
#include <chrono>
#include <iostream>
#include <vector>
#include <algorithm>
#include <ranges>

using namespace std;

bool sumOfTwo(vector<int> &vectorian, const int value) {
    auto end = vectorian.size() - 1;
    auto start = 0;
    auto sum = vectorian[start] + vectorian[end];
    sort(vectorian.begin(), vectorian.end());
    while (sum != value && start != end) {
        if (sum > value) {
            start++;
            sum = vectorian[start] + vectorian[end];
        } else if (sum < value) {
            end--;
            sum = vectorian[start] + vectorian[end];
        }
    }
    if (sum == value) {
        cout << vectorian[end] << " " << vectorian[start] << '\n';
//        std::this_thread::sleep_for(std::chrono::seconds(15));
        return true;
    }
    return false;

}

auto main() -> int {
    auto vectorio = vector<int>{20, 5, 1};
    const auto value = 21;
//    if (sumOfTwo(vectorio, value) == true) {
//        bool t = true;
//    } else {
//        bool t = false;
//        cout << t << '\n';
//    }
    cout << sumOfTwo(vectorio, value) << '\n';
}