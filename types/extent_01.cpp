//quoted from cpp reference.com

#include <type_traits>

static_assert(
    std::extent_v<int[3]> == 3 && // default dimension is 0
    std::extent_v<int[3], 0> == 3 && // the same as above
    std::extent_v<int[3][4], 0> == 3 &&
    std::extent_v<int[3][4], 1> == 4 &&
    std::extent_v<int[3][4], 2> == 0 &&
    std::extent_v<int[]> == 0
    );

int main()
{
    const auto ext = std::extent<int['*']>{};
    static_assert(ext == 42); // with implicit conversion to std::size_t

    const int ints[]{ 1, 2, 3, 4 };
    static_assert(std::extent_v<decltype(ints)> == 4); // array size

    [[maybe_unused]] int ary[][3] = { {1, 2, 3} };

    //ary[0] is of type reference to 'int[3]', so, the extent
    // cannot be calculated correctly and it returns 0
    static_assert(std::is_same_v<decltype(ary[0]), int(&)[3]>);
    static_assert(std::extent_v<decltype(ary[0])> == 0);

    //removing reference gives correct extent value 3
    static_assert(std::extent_v<std::remove_cvref_t<decltype(ary[0])>> == 3);
}
