#include <fmt/ranges.h>
#include <string>
#include <vector>

using namespace std;

// TODO обсудить
auto main() -> int {
    auto x = 74;
    string text = "hello!";
    auto size = text.size();
    auto specialCharacter = 20;
    double abobich = 1.337;
    auto vectusia = vector<int>{1, 2, 3, 5, 6};
    auto wordisimo = "wordisimo";
    auto slovo = "The simplest C++ program is: \"auto main() -> int { }\"";
    auto remainingLength = specialCharacter - size;
    int firstAndLAst = remainingLength / 2;
    auto middle = remainingLength - firstAndLAst;
    fmt::println("({})\n({})\n({})", wordisimo, wordisimo, wordisimo);
    fmt::print("{}\n", slovo);
    fmt::print("{}\n", vectusia);
    fmt::print("${}$\n", fmt::join(vectusia, " - "));
    fmt::print("?{}?\n", "I'm enclosed in question marks");
    fmt::print("{:.3}\n", abobich);
    fmt::println("{:b} {} {:x}\n", x, x, x);
    fmt::println("{}{}\n",text , string(remainingLength,'#'));
    fmt::println("{}{}{}\n", string(firstAndLAst,'#'),text,string(firstAndLAst,'#'));
    fmt::println("{}{}\n", string(remainingLength,'#'),text);
}