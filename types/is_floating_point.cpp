#include <type_traits>
#include <iostream>

template< class T >
struct IsFloatingPoint : std::integral_constant<bool,
    std::is_same<float, typename std::remove_cv<T>::type>::value ||
    std::is_same<double, typename std::remove_cv<T>::type>::value ||
    std::is_same<long double, typename std::remove_cv<T>::type>::value
> {};

template< class T >
inline constexpr bool isFloatingPoint_v = IsFloatingPoint<T>::value;

int main()
{
    std::cout << std::boolalpha;

    std::cout << isFloatingPoint_v<int> << "\n"; //false
    std::cout << isFloatingPoint_v<float> << "\n"; //true
    std::cout << isFloatingPoint_v<const float> << "\n"; //true
    std::cout << isFloatingPoint_v<double> << "\n"; //true
    std::cout << isFloatingPoint_v<double const> << "\n"; //true
}
