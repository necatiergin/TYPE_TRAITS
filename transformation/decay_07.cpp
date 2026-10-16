using F = void(int, double);

using R = F&;

using P = std::decay_t<R>;

static_assert(
    std::is_same_v<
        P,
        void(*)(int, double)
    >
);
