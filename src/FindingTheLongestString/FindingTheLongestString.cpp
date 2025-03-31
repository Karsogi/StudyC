#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
namespace v1 {
    string printLongestString(const vector<string> &vec) {
        return ranges::max(vec, [](const string &a, const string &b) {
            return a.size() < b.size();
        });
    }
}
namespace v2 {
    string printLongestString(const vector<string> &vec) {
        auto maxWord = ranges::max_element(vec, [](const string &a, const string &b) {
            return a.size() < b.size();
        });
        return *maxWord;
    }
}
namespace v3 {
    string printLongestString(const vector<string> &vec) {
        return ranges::min(vec, [](const string &a, const string &b) {
            return a.size() > b.size();
        });
    }
}
namespace v4 {
    string printLongestString(const vector<string> &vec) {
        auto maxWord = ranges::min_element(vec, [](const string &a, const string &b) {
            return a.size() > b.size();
        });
        return *maxWord;
    }
}

auto main() -> int {
    auto const ab = vector<string>{"abcd", "lol"};
    cout << v3::printLongestString(ab);
}