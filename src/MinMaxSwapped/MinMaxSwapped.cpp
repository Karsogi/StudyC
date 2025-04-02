//Create a function called withMinmaxSwapped(), which should accept a
// single argument of type std::vector<int>. The function should swap its greatest and smallest elements
// position-wise (i.e., find the greatest one, the smallest one and swap them, so that the
// index of the smallest one is now the index of the greatest one and vice versa). The function
// should return the modified vector.
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> MinMaxSwapped(vector<int> &vec) {
    auto maxIndex = 0;
    auto element = vec[0];
    auto lesIndex = 0;
    auto lesser = vec[0];
    for (auto i = 0; i < vec.size(); i++) {
        if (element < vec[i]) {
            element = vec[i];
            maxIndex = i;
        }
        if (lesser > vec[i]) {
            lesser = vec[i];
            lesIndex = i;
        }
    }
    vec[maxIndex] = vec[lesIndex];
    vec[lesIndex] = element;
    return vec;
}

auto main() -> int {
    auto vec = vector<int>{1, 2, -3, 5, 0, 10, -2, 1000};
    MinMaxSwapped(vec);
    for (auto element: vec) {
        cout << element <<'\n';
    }
}