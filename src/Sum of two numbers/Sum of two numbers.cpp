#include<iostream>
#include<vector>

using namespace std;

auto main() -> int {
    auto vectorio = vector<int>();
    auto vectorioLength = 10;
    auto n = int();
    cout << "Sergeant, how many enemies are on the frontline?:\n";
    cin >> n;
    cout << "Deploy" << vectorioLength << "soldiers!:\n";
    for (auto i = 0; i < vectorioLength; i++) {
        auto b = int();
        cin >> b;
        vectorio.push_back(b);
    }
    cout << "We will compare our troops to enemies!\n";
    auto sumOfTwo = vectorio[0] + vectorio[1];

}
