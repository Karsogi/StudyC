//
// Created by Asus on 03.03.2025.
//
#include "String.h"
#include <iostream>
#include <string>
#include <algorithm>;

using namespace std;

int main() {
    string word = "programming";
    int size = word.size();
    int middleSize = size / 2;
    cout << word[0] << '\n';
    cout << "'" << word.back() << "'" << ' ' << '\n' << size << '\n' << "\"" << word[middleSize] << "\"" << '\n';
    cout << "[" << word << "]" << '\n';
    reverse(word.begin(), word.end());
    cout << word;
    return 0;
}