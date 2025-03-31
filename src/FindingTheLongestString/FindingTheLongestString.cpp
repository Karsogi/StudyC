#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>

using namespace std;
namespace v1 {
    string printLongestString(const vector<string> &vec) {
        assert (!vec.empty() && "The vector should contain some words!");
        return ranges::max(vec, [](const string &a, const string &b) {
            return a.size() < b.size();
        });
    }
}
namespace v2 {
    string printLongestString(const vector<string> &vec) {
        assert (!vec.empty() && "The vector should contain some words!");
        auto maxWord = ranges::max_element(vec, [](const string &a, const string &b) {
            return a.size() < b.size();
        });
        return *maxWord;
    }
}
namespace v3 {
    string printLongestString(const vector<string> &vec) {
        assert (!vec.empty() && "The vector should contain some words!");
        return ranges::min(vec, [](const string &a, const string &b) {
            return a.size() > b.size();
        });
    }
}
namespace v4 {
    string printLongestString(const vector<string> &vec) {
        assert (!vec.empty() && "The vector should contain some words!");
        auto maxWord = ranges::min_element(vec, [](const string &a, const string &b) {
            return a.size() > b.size();
        });
        return *maxWord;
    }
}

auto main() -> int {
    auto const ab = vector<string>{"abcd", "lol","as"};
    cout << v1::printLongestString(ab);
}