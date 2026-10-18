#include <type_traits>
#include <iostream>

template <class T>
struct IsFloatingPoint : std::integral_constant<bool,
    std::is_same_v<float, std::remove_cv_t<T>> ||
    std::is_same_v<double, std::remove_cv_t<T>> ||
    std::is_same_v<long double, std::remove_cv_t<T>>
> {};

template< class T >
inline constexpr bool isFloatingPoint_v = IsFloatingPoint<T>::value;

int main()
{
    constexpr auto b1 = isFloatingPoint_v<int>;
    constexpr auto b2 = isFloatingPoint_v<float>;
    constexpr auto b3 = isFloatingPoint_v<const float>;
    constexpr auto b4 = isFloatingPoint_v<volatile float>;
}
