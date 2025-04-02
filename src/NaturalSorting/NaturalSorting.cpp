#include <algorithm>
#include <string>
#include <vector>

#include <fmt/ranges.h>

auto main() -> int {
    auto fileNames = std::vector<std::string>{
            "lecture 1", "lecture 2", "lecture 3",
            "lecture 10", "lecture 11", "lecture 12",
            "lecture 35", "lecture 39", "lecture 92",
            "lecture 101", "lecture 111", "lecture 133",
            "lecture 159", "lecture 212", "lecture 221"
    };

    std::ranges::sort(fileNames);

    fmt::println("{}", fmt::join(fileNames, "\n"));
}