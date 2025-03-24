//
// Created by Asus on 02.03.2025.
//

#include <vector>
#include <cmath>
#include<iostream>




using namespace std;

bool isPrime(int number) {
    if (number < 2) return false;
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) return false;
    }
    return true;
}


int main() {
    auto numbersToCheck = vector<int>(); //?
    int n;
    cout << "Pirate, we need to catch the treaure called prime" << '\n';
    cout << "ARGHH How many attempts will we use to catch?: " << '\n';
    cin >> n;
    cout << "PIRATE,type natural " << n <<' ' << "numbers ARGHH: ";
    for (int t = 0; t < n; t++) {
        int numbers;
        cin >> numbers;
        numbersToCheck.push_back(numbers);
    }
    for (int number: numbersToCheck) {
        if (isPrime(number)) {
            cout << "we found the prime number, we are rich!";
        }
        if (!isPrime(number)) {
            cout << "We lost too many resources,no beer for you!";
        }
    }
    return 0;
}