//
// Created by Asus on 03.03.2025.
//
#include <iostream>
#include <string>
#include <algorithm>;

using namespace std;

int main() {
    string word = "programming";
    const int size = word.size();
    const int middleSize = size / 2;
    cout << word[0] << '\n';
    cout << "'" << word.back() << "'" << ' ' << '\n' << size << '\n' << '"' << word[middleSize] << "\"" << '\n'; // \ is used in escape sequences
    cout << "[" << word << "]" << '\n';
    ranges::reverse(word);
    cout << word;
    return 0;
}