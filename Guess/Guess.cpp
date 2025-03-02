//
// Created by Asus on 02.03.2025.
//

#include "Guess.h"
#include <iostream>

int main() {
    int guessednumber = 0;
    int numbertoGuess = (int) (std::rand() * 10);
    while (guessednumber != numbertoGuess) {
        std::cout << "Try to guess me GIgaChad: ";
        std::cin >> guessednumber;

        if (numbertoGuess > guessednumber) {
            std::cout << "Toooooo low Gigachad." << '\n';
        } else if (numbertoGuess < guessednumber) {
            std::cout << "Too high Gigachad." << '\n';
        }
    }
    std::cout << "You have defeated me GigaChad!=(";
}