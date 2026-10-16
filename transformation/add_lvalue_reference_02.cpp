#include <type_traits>

template<typename T>
struct Traits {
    using value_type = std::remove_cvref_t<T>;

    using reference =
        std::add_lvalue_reference_t<value_type>;
};

static_assert(std::is_same_v<
    Traits<const int&&>::reference,
    int&
>);
