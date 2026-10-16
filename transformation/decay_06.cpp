#include <type_traits>

using F = int(double);

using P = std::decay_t<F>;

static_assert(
    std::is_same_v<P, int(*)(double)>
);
