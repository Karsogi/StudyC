#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    std::cout << "Enter your name looser: ";
    std::cin >> word;
    if (word == "Tomashevski") {
        std::cout << "oh shit";
    } else if (word == "Aboba") {
        std::cout << "You are a real deal,aren't you?";
    } else {
        std::cout << "What a joke";
    }
    return 0;
}