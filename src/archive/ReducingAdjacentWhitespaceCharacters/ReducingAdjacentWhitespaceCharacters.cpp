#include <string>
#include <algorithm>
#include "fmt/ranges.h"

using namespace std;

string reduceAdjacentWhitespaces(string words) {
    ranges::transform(words, words.begin(), [](char &a) {
        if (a == '\t' || a == '\n') {
            return ' ';
        }
        return a;
    });
    auto end = unique(words.begin(), words.end(), [](char &a, char &b) {
        return a == ' ' &&
         b == ' ';
    });
    words.erase(end,words.end());
    return words;
}


auto main() -> int {
    fmt::println(
            "[{}]\n[{}]\n[{}]\n[{}]",
            reduceAdjacentWhitespaces("Abc"),
            reduceAdjacentWhitespaces("A b c"),
            reduceAdjacentWhitespaces("   A\tb c      "),
            reduceAdjacentWhitespaces("A\t\tb\n \n  \t c")
    );
}
