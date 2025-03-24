#include "fmt/ranges.h"
#include <string>
#include <algorithm>
#include <ranges>
#include <windows.h>
#include <regex>

using namespace std;

// разворачивается вся строка, а не слова в ней и ты возвращаешь не ту переменную
string reversedWords(const string &aloha) {
    string alohich = aloha;
    regex reg("[ ]+");
    ranges::reverse(alohich);
    auto start = 0;
    for (auto i = 0; i < alohich.size(); ++i) {
        if (i == alohich.size() || alohich[i] == ' ') {
            ranges::reverse (alohich.begin() + start, alohich.begin() + i);
            start = i+1;
        }
    }
    // split -> reverse -> join -> print
    return alohich;
}


auto main() -> int {
    fmt::println(
            "{}\n{}\n{}\n{}",
            reversedWords("A quick brown fox"),
            reversedWords("Quick"),
            reversedWords(""),
            reversedWords("1 2 3")
    );
}


