#include <type_traits>

static_assert(
    std::is_same_v<
        std::decay_t<int[10]>,
        int*
    >
);

static_assert(
    std::is_same_v<
        std::decay_t<const int[20]>,
        const int*
    >
);

static_assert(
    std::is_same_v<
        std::decay_t<int(&)[5]>,
        int*
    >
);
