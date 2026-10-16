#include <type_traits>

static_assert(std::is_same_v<
    std::add_rvalue_reference_t<void>,
    void
>);

static_assert(std::is_same_v<
    std::add_rvalue_reference_t<const void>,
    const void
>);

static_assert(std::is_same_v<
    std::add_rvalue_reference_t<volatile void>,
    volatile void
>);

static_assert(std::is_same_v<
    std::add_rvalue_reference_t<const volatile void>,
    const volatile void
>);
