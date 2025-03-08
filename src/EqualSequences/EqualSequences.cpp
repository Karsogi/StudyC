//
// Created by Administrator on 03.03.2025.
//

#include <iostream>
#include <vector>

using namespace std;

auto main() -> int {

    constexpr auto sequenceLength = 10;
    constexpr auto sequenceMiddle = sequenceLength / 2;
    // auto sequence = vector<int>();
    auto sequence = vector<int>();
    cout << "Enter " << sequenceLength << " integer numbers\n";

    for (int i = 0; i < sequenceLength; ++i) {
        int n;
        cin >> n;
        sequence.push_back(n);
    }

    // for (int i = 0; i < sequenceLength; ++i) {
    //     auto n = int();
    //     cin >> n;
    //     sequence.push_back(n);
    // }

    auto equal = true;
    for (int i = 0; i < sequenceMiddle; ++i) {
        const auto current = sequence[i];
        auto found = false;

        for (int j = sequenceMiddle; j < sequenceLength; ++j) {
            if (current == sequence[j]) {
                found = true;

                sequence.erase(sequence.begin() + j);
                break;
            }
        }
        cout << current << " found: " << found << '\n';
        if (!found) {
            equal = false;
            break;
        }
    }

    cout << "Sequences equal: " << equal;
}
