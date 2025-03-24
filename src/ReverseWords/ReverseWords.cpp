#include "fmt/ranges.h"
#include <string>
#include <algorithm>
#include <ranges>
#include <windows.h>
using namespace std;

// разворачивается вся строка, а не слова в ней и ты возвращаешь не ту переменную
string reversedWords(const string& aloha){
    string alohich = aloha;
    ranges::reverse(alohich);
    // split -> reverse -> join -> print
    return alohich;
}


auto main()-> int
{
    fmt::println(
            "{}\n{}\n{}\n{}",
            reversedWords("A quick brown fox"),
            reversedWords("Quick"),
            reversedWords(""),
            reversedWords("1 2 3")
    );
}


