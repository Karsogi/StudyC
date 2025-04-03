#ifndef PJC_H
#define PJC_H

#include <vector>
#include <string>
#include <cassert>

namespace pjc {
    using namespace std;


    vector<string> naturalSorting(vector<string> &vec) {
        assert (!vec.empty() && "The vector should contain some words!");

        auto digit = [](char a) {
            return a >= 0 && a <= 9;
        };
        auto word = [](char a) {
            return a < 0 || a > 9;
        };
        auto firstWordToCompare = string();
        auto secondWordToCompare = string();
        auto sortedVector = vector<string>();
        for (auto i = 0; i < vec.size() - 1; i++) {
            for (auto j = i + 1; j < vec.size(); ++j) {
                if (word(vec[i].front() && vec[j].front())) {
                    firstWordToCompare = vec[i];
                    secondWordToCompare = vec[j];
                } else if (digit(vec[i].front() && vec[j].front())) {
                    firstWordToCompare = vec[i];
                    secondWordToCompare = vec[j];
                } else if (vec[i].front() > vec[j].front()) {
                    firstWordToCompare = vec[i];
                    sortedVector.push_back(firstWordToCompare);
                } else {
                    secondWordToCompare = vec[j];
                    sortedVector.push_back(secondWordToCompare);
                }

                for (auto n = firstWordToCompare.begin(); n != firstWordToCompare.end(); n++) {
                    for (auto l = secondWordToCompare.begin();
                         l != secondWordToCompare.end(); ++l) {
                        if (*n > *l) {
                            firstWordToCompare = vec[i];
                            sortedVector.push_back(firstWordToCompare);
                        } else if (*l > *n) {
                            secondWordToCompare = vec[j];
                            sortedVector.push_back(secondWordToCompare);
                        }
                    }
                }
            }
        }
        return sortedVector;
    }
}
#endif