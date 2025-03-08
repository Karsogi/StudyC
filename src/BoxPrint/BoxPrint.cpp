#include <string>
#include <iostream>
#include <vector>

using namespace std;

void boxPrint(const vector<string>& text, char border = '*')
{
    
}

auto main() -> int
{
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