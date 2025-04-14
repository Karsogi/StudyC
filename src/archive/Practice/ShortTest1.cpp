//
// Created by Asus on 10.03.2025.
//
#include <iostream>
#include <vector>
using namespace std;


// НЕПРАВИЛЬНО
bool compare(vector<double>& vectoria, vector<double>& vasya)
{
    auto lastElIndex = vectoria.size() - 1;
    auto lastElIndex2 = vasya.size() - 1;
    cout << vectoria[lastElIndex] << " " << vasya[lastElIndex2] << '\n';
    if (vectoria[lastElIndex] < vasya[lastElIndex2])
    {
        return true;
    }
    return false;
}

auto main() -> int
{
    auto vectoria = vector<double>{1.0, 2.2, 3.5, 8, 10};
    auto vasya = vector<double>{1.0, 2.1, 5.6, 7.9, 9};
    cout << compare(vectoria, vasya);
}
