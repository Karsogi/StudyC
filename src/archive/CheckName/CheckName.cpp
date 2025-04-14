#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    cout << "Enter your name looser: ";
    cin >> word;
    if (word == "Tomaszewski") {
        cout << "oh shit";
    } else if (word == "Aboba") {
        cout << "You are a real deal,aren't you?";
    } else {
        cout << "What a joke";
    }
    return 0;
}