#include "fmt/ranges.h"
#include <string>
#include <algorithm>
using namespace std;

string reversedWords(const string& aloha){
    string alohich = aloha;
    ranges::reverse(alohich);
    return aloha;
}


auto main()-> int {
    fmt::println(
            "{}\n{}\n{}\n{}",
            reversedWords("A quick brown fox"),
            reversedWords("Quick"),
            reversedWords(""),
            reversedWords("1 2 3")
    );
}
