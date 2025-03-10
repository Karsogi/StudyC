#include <string>
#include <iostream>
#include <vector>

using namespace std;

void boxPrint(const vector<string> &text, char border = '*') {
    auto greatest = 0;
    for (int i = 0; i < text.size(); i++) {
        if (text[i].size() > greatest) {
            greatest = text[i].size();
        }
    }
    for (auto i = 0; i < greatest + 2; i++) {
        cout << border;
    }
    cout << '\n';
    for (auto i = 0; i < text.size(); i++) {
        for (auto j = 0; j < 1; j++) {


            cout << border << text[i] << string (greatest - text[i].size(), ' ') << border << '\n';
        }
    }
    for (auto i = 0; i < greatest + 2; i++) {
        cout << border;
    }
    cout << '\n';
}

auto main() -> int {
    const auto words = vector<string>{"I", "DONT", "WANT", "TO", "CHANGE", "IT"};
    boxPrint(words);

    boxPrint({"a", "quick", "brown", "fox"});
    boxPrint({"a", "quick", "brown", "fox"}, '*');
    boxPrint({"a", "quick", "brown", "fox"}, '#');
    boxPrint(vector<string>{"a", "quick", "brown", "fox"}, '#');
    boxPrint({""});
    boxPrint({});
    boxPrint({}, '#');
    boxPrint({"", "hmmmm", ""});
    boxPrint({"", "", ""});
}