#include <iostream>
#include <bits/random.h>

using namespace std;

int main() {
    random_device rd;
    uniform_int_distribution dist(0, 100);
    
    int guessedNumber = 0;
    const int numberToGuess = dist(rd);
    while (guessedNumber != numberToGuess) {
        cout << "Try to guess me GIgaChad: ";
        cin >> guessedNumber;

        if (numberToGuess > guessedNumber) {
            cout << "Toooooo low Gigachad." << '\n';
        } else if (numberToGuess < guessedNumber) {
            cout << "Too high Gigachad." << '\n';
        }
    }
    cout << "You have defeated me GigaChad!=(";
}
