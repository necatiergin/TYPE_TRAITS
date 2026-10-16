#include <type_traits>

static_assert(std::is_same_v<
    std::add_lvalue_reference_t<int>,
    int&
>);

static_assert(std::is_same_v<
    std::add_lvalue_reference_t<const int>,
    const int&
>);

static_assert(std::is_same_v<
    std::add_lvalue_reference_t<volatile int>,
    volatile int&
>);

static_assert(std::is_same_v<
    std::add_lvalue_reference_t<int&>,
    int&
>);

static_assert(std::is_same_v<
    std::add_lvalue_reference_t<int&&>,
    int&
>);

static_assert(std::is_same_v<
    std::add_lvalue_reference_t<const int&>,
    const int&
>);
