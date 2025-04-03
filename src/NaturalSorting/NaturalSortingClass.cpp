#include <algorithm>
#include <string>
#include <vector>

#include <fmt/ranges.h>
#include <cassert>

using namespace std;
vector<string> naturalSorting(vector<string> &vec) {
    assert (!vec.empty() && "The vector should contain some words!");

    auto digit = [](char a) {
        return a >= '0' && a <= '9';
    };
    auto word = [](char a) {
        return a < '0' || a > '9';
    };
    auto firstWordToCompare = string();
    auto secondWordToCompare = string();
    auto sortedVector = vector<string>();
    for (auto i = 0; i < vec.size() - 1; i++) {
        for (auto j = i + 1; j < vec.size(); ++j) {
            if (word(vec[i].front()) && word(vec[j].front())) {
                if (vec[i] > vec[j]) {
                    swap(vec[i], vec[j]);
                }
            } else if (digit(vec[i].front()) && digit(vec[j].front())) {
                if (vec[i] > vec[j]) {
                    swap(vec[i], vec[j]);
                }
            } else if (word(vec[i].front()) && digit(vec[j].front())) {
                swap(vec[i], vec[j]);
            }
        }
    }

    for (const auto& word : vec) {
        sortedVector.push_back(word);
    }

    return sortedVector;
}
auto main() -> int {
    auto fileNames = std::vector<std::string>{
            "lecture 1", "lecture 2", "lecture 3",
            "lecture 10", "lecture 11", "lecture 12",
            "lecture 35", "lecture 39", "lecture 92",
            "lecture 101", "lecture 111", "lecture 133",
            "lecture 159", "lecture 100", "lecture 221"
    };
    naturalSorting(fileNames);

    fmt::println("{}", fmt::join(fileNames, "\n"));
}
//vector<string> naturalSorting(vector<string> &vec) {
//    assert (!vec.empty() && "The vector should contain some words!");
//
//    auto digit = [](char a) {
//        return a >= '0' && a <= '9';
//    };
//    auto word = [](char a) {
//        return a < '0' || a > '9';
//    };
//    auto firstWordToCompare = string();
//    auto secondWordToCompare = string();
//    auto sortedVector = vector<string>();
//    for (auto i = 0; i < vec.size() - 1; i++) {
//        for (auto j = i + 1; j < vec.size(); ++j) {
//            if (word(vec[i].front()) && word(vec[j].front())) {
//                firstWordToCompare = vec[i];
//                secondWordToCompare = vec[j];
//            } else if (digit(vec[i].front()) && digit(vec[j].front())) {
//                firstWordToCompare = vec[i];
//                secondWordToCompare = vec[j];
//            } else if (vec[i].front() > vec[j].front()) {
//                firstWordToCompare = vec[i];
//                sortedVector.push_back(firstWordToCompare);
//            } else {
//                secondWordToCompare = vec[j];
//                sortedVector.push_back(secondWordToCompare);
//            }
//
//            for (auto n = firstWordToCompare.begin(); n != firstWordToCompare.end(); n++) {
//                for (auto l = secondWordToCompare.begin();
//                     l != secondWordToCompare.end(); ++l) {
//                    if (*n > *l) {
//                        firstWordToCompare = vec[i];
//                        sortedVector.push_back(firstWordToCompare);
//                    } else if (*l > *n) {
//                        secondWordToCompare = vec[j];
//                        sortedVector.push_back(secondWordToCompare);
//                    }
//                }
//            }
//        }
//    }
//    return sortedVector;
//}