#include <string>
#include <vector>
#include <iostream>
#include <set>
#include <fmt/ranges.h>
using namespace std;
auto main()-> int{
    auto word = vector<string>();
    auto b = string();
    for (int i = 0; i < 10; ++i) {
    cin >> b;
    word.push_back(b);
    }
    auto names = set<string>(word.begin(),word.end());
    fmt::println("{}",names);
}

// TODO обсудить