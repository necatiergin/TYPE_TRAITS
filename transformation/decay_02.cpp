#include <type_traits>

static_assert(
    std::is_same_v<
        std::decay_t<int>,
        int
    >
);

static_assert(
    std::is_same_v<
        std::decay_t<const int>,
        int
    >
);

static_assert(
    std::is_same_v<
        std::decay_t<volatile int>,
        int
    >
);

static_assert(
    std::is_same_v<
        std::decay_t<const volatile int&>,
        int
    >
);

static_assert(
    std::is_same_v<
        std::decay_t<int&&>,
        int
    >
);
