#include <type_traits>

using F = void(int) noexcept;

using P = std::decay_t<F>;

static_assert(
    std::is_same_v<
    P,
    void(*)(int) noexcept
    >
    );
