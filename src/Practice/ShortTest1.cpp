//
// Created by Asus on 10.03.2025.
//
#include <iostream>
#include <vector>
using namespace std;


// TODO НЕПРАВИЛЬНО
bool compare(vector<double>& vectoria, vector<double>& vasya)
{
    auto last = vectoria.size();
    auto last1 = vasya.size();
    cout << vectoria[last - 1] << ' ' << vasya[last1 - 1];
    if (vectoria[last] < vasya[last1])
    {
        return true;
    }
    return false;
}

auto main() -> int
{
    auto vectoria = vector<double>{1.0, 2.2, 3.5, 8, 10};
    auto vasya = vector<double>{1.0, 2.1, 5.6, 7.9, 9};
    cout << compare(vasya, vectoria); // порядок аргументов
}
