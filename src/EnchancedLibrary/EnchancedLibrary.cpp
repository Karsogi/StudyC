
using namespace std;
namespace pjc {
    namespace ranges {
        template <typename T>
        auto sort(T const& collection) {
            auto copy = collection;
            ranges::sort(copy);
            return copy;
        }
        template <typename T>
        auto reverse(T const& collection) {
            auto copy = collection;
            ranges::reverse(copy);
            return copy;
        }
    }
}