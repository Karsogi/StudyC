#include <algorithm>
#include <vector>
#include <fmt/ranges.h>

using namespace std;

// TODO обсудить
void sortBiggerHalf(vector<int> &astronavt) {
    auto firstHalfSum = 0;
    auto secondHalfSum = 0;
    if (astronavt.size() % 2 != 0) {
        astronavt.insert(astronavt.begin() + 2, 0);
    }
    auto half = astronavt.begin() + astronavt.size() / 2;
    for (int i = 0; i < astronavt.size() / 2; ++i) {
        firstHalfSum = firstHalfSum + astronavt[i];
    }
    for (int i = astronavt.size() / 2; i < astronavt.size(); ++i) {
        secondHalfSum = secondHalfSum + astronavt[i];
    }
    if (firstHalfSum == secondHalfSum) {
        ranges::sort(half, astronavt.end());
    }
    if (firstHalfSum < secondHalfSum) {
        ranges::sort(half, astronavt.end());
    }
    if (firstHalfSum > secondHalfSum) {
        ranges::sort(astronavt.begin(), half);
    }

}

auto main() -> int {
    auto firstHalfBigger  = std::vector<int>{3, 2, 1, 0, 1, 0,0};
    auto secondHalfBigger = std::vector<int>{3, 2, 1, 6, 5, 4};
    auto bothHalvesSame   = std::vector<int>{5, 4, 5, 4};

    sortBiggerHalf(firstHalfBigger);
    sortBiggerHalf(secondHalfBigger);
    sortBiggerHalf(bothHalvesSame);
    fmt::println("{}\n{}\n{}", firstHalfBigger,
                 secondHalfBigger,
                 bothHalvesSame);
}