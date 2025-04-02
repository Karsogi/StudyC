#include <vector>
#include <string>
#include <algorithm>

auto example(
        std::vector<std::string> left, std::vector<std::string> right
) -> void {
    std::ranges::sort(left);
    auto duplicates = std::ranges::unique(left);
    left.erase(duplicates.begin(), duplicates.end());

    std::ranges::sort(right);
    duplicates = std::ranges::unique(right);
    right.erase(duplicates.begin(), duplicates.end());
    auto conditionForDigit = [](char a) {
        return a >= 0 && a <= 9;
    };

    if (left.size() < right.size()) {
        for (auto i = 0; i < right.size(); i++) {
            for (auto j = 0; j < right.size() - 1 - i; j++) {
                // both start with a digit or both start with a letter
                if (conditionForDigit(right[j].front()) &&
                    conditionForDigit(right[j + 1].front()) ||
                    !conditionForDigit(right[j].front()) &&
                    !conditionForDigit(right[j + 1].front())) {
                    if (right[j] > right[j + 1]) {
                        std::ranges::swap(right[j], right[j + 1]);
                    }
                } else { // leading digits last
                    if (conditionForDigit(right[j].front())) {
                        std::ranges::swap(right[j], right[j + 1]);
                    }
                }
            }
        }
    } else {
        for (auto i = 0; i < left.size(); i++) {
            for (auto j = 0; j < left.size() - 1 - i; j++) {
                // both start with a digit or both start with a letter
                if (conditionForDigit(left[j].front()) &&
                    conditionForDigit(left[j + 1].front()) ||
                    !conditionForDigit(left[j].front()) &&
                    !conditionForDigit(left[j + 1].front())) {
                    if (left[j] > left[j + 1]) {
                        std::ranges::swap(left[j], left[j + 1]);
                    }
                } else { // leading digits last
                    if (conditionForDigit(left[j].front())) {
                        std::ranges::swap(left[j], left[j + 1]);
                    }
                }
            }
        }
    }
}
