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
    auto size = vec.size();
    for (auto i = 0; i < size; i++) {
        auto maxIndex = 0;
        auto element = 0;
        auto lesIndex = 0;
        auto lesser = 0;

        if (vec[i] > vec[i + 1]) {
             maxIndex = i;
             element = vec[i];
        }
        if (lesser < vec[i]) {
            lesser = vec[i];
            lesIndex = i;
        }
        vec[maxIndex] = vec[lesIndex];
        vec[lesIndex] = element;
    }
    return vec;
}
auto main() -> int {
    auto vec = vector<int>{1,2,3,4,5,6};
    MinMaxSwapped(vec);
    for (auto element : vec){
        cout << element;
    }
}