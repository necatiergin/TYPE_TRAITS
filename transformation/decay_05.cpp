using A = int[3][5];

using B = std::decay_t<A>;

static_assert(
    std::is_same_v<B, int(*)[5]>
);
