static_assert(
    std::is_same_v<
        std::decay_t<const int*>,
        const int*
    >
);

static_assert(
    std::is_same_v<
        std::decay_t<int* const>,
        int*
    >
);

static_assert(
    std::is_same_v<
        std::decay_t<const int* const&>,
        const int*
    >
);
