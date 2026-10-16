#include <type_traits>

static_assert(
    std::is_same_v<
    std::decay_t<const int&>,
    int
    >
    );

static_assert(
    std::is_same_v<
    std::decay_t<int[10]>,
    int*
    >
    );

static_assert(
    std::is_same_v<
    std::decay_t<void(int)>,
    void(*)(int)
    >
    );
