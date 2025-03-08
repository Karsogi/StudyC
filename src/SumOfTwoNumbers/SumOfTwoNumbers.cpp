#include<iostream>
#include<vector>

using namespace std;

bool sumOfTwo(const std::vector<int>& nums, int target)
{

    if (nums.size() < 2) return false;
    
    auto start = 0;
    auto end = nums.size() - 1;
    auto sum = nums[start] + nums[end];

    while (sum != target && start < end)
    {
        if (sum > target) end--;
        else start++;
        sum = nums[start] + nums[end];
    }
    
    if (sum == target && start != end)
    {
        cout << start << " " << end << '\n';
        return true;
    }
    return false;
}

auto main() -> int
{
    // square brackets []
    // round brackets ()
    // figure brackets {}

    const auto nums = std::vector{2, 4, 5, 8, 9, 11, 13, 15};
    constexpr auto target = 4;

    cout << sumOfTwo(nums, target);
}
