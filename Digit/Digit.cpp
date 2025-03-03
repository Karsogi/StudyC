//
// Created by Asus on 03.03.2025.
//
#include <string>
#include <iostream>
#include "Digit.h"

using namespace std;

int main() {
//    int number;
//    cout << "We need a number Komrade: ";
//    cin >> number;
//    switch (number){
//        case 0:
//            cout << "zero";
//            break;
//        case 1:
//            cout << "one";
//            break;
//        case 2:
//            cout << "two";
//            break;
//        case 3:
//            cout << "three";
//            break;
//        case 4:
//            cout << "four";
//            break;
//        case 5:
//            cout << "five";
//            break;
//        case 6 :
//            cout << "six";
//            break;
//        case 7:
//            cout << "seven";
//            break;
//        case 8:
//            cout << "eight";
//            break;
//        case 9:
//            cout << "nine";
//            break;
//        default:
//            cout << "Incorrect input! Try again by restarting the program";
//    }
//return 0;
//}
    auto number = string();
    cout << "We need a number Komrade, spell it Komrade: ";
    cin >> number;
    if (number == "one") {
        cout << 1;
    } else if (number == "two") {
        cout << 2;
    } else if (number == "three") {
        cout << 3;
    } else if (number == "four") {
        cout << 4;
    } else if (number == "five") {
        cout << 5;
    } else if (number == "five") {
        cout << 5;
    } else if (number == "six") {
        cout << 6;
    } else if (number == "seven") {
        cout << 7;
    } else if (number == "eight") {
        cout << 8;
    } else if (number == "nine") {
        cout << 9;
    } else {
        cout << "Incorrect input! Try again by restarting the program";
    }
}