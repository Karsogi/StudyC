//
// Created by Asus on 16.03.2025.
//
#include <iostream>
#include <vector>
#include <set>
using namespace std;
int IratingOver(vector<int>& attack, int& n){
     auto b = attack.begin() + n;
    while (b != attack.begin()){
        b--;
        cout << *b << '\n';
    }
    return 0;
}





auto main() -> int{
    vector<int> titan;
    auto n = 0;
    cout << "Describe your n" << "\n";
    cin >> n;
    auto b = 0;
    cout << "Put your 9 numbers in my bag!" << '\n';
    for (auto i = 0; i < 9; ++i) {
        cin >> b;
        titan.push_back(b);
    }
    IratingOver(titan,n);
}