#include <vector>

using namespace std;
namespace pjc {
    namespace ranges {
        vector<int> sort(vector<int> vec) {
            auto copy = vec;
            ranges::sort(copy);
            return copy;
        }
        vector<int> reverse(vector<int> vec) {
            auto copy = vec;
            ranges::reverse(copy);
            return copy;
        }
    }
}