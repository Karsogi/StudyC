//
// Created by Administrator on 14.04.2025.
//

#include <vector>
#include <algorithm>
#include <iostream>

#include <fmt/ranges.h>

auto main() -> int {
	auto vec = std::vector{10, 2, 3, 4, 5};
	auto const iterMax = std::ranges::max_element(vec);
	auto const iterMin = std::ranges::min_element(vec);

	std::cout << &*iterMax << " " << *iterMax << " --- " << &*iterMin << " " << *iterMin << '\n';
	std::ranges::iter_swap(iterMax, iterMin);
	std::cout << &*iterMax << " " << *iterMax << " --- " << &*iterMin << " " << *iterMin << '\n';

	auto const iterMax2 = std::ranges::max_element(vec);
	auto const iterMin2 = std::ranges::min_element(vec);

	std::cout << &*iterMax2 << " " << *iterMax2 << " --- " << &*iterMin2 << " " << *iterMin2 << '\n';

	fmt::println("{}", vec);
}
