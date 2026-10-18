
#include <type_traits>

template<typename T>
struct is_integral_impl : std::false_type {};

template<> struct is_integral_impl<bool> : std::true_type {};
template<> struct is_integral_impl<char> : std::true_type {};
template<> struct is_integral_impl<signed char> : std::true_type {};
template<> struct is_integral_impl<unsigned char> : std::true_type {};
template<> struct is_integral_impl<wchar_t> : std::true_type {};
template<> struct is_integral_impl<char16_t> : std::true_type {};
template<> struct is_integral_impl<char32_t> : std::true_type {};
template<> struct is_integral_impl<short> : std::true_type {};
template<> struct is_integral_impl<unsigned short> : std::true_type {};
template<> struct is_integral_impl<int> : std::true_type {};
template<> struct is_integral_impl<unsigned int> : std::true_type {};
template<> struct is_integral_impl<long> : std::true_type {};
template<> struct is_integral_impl<unsigned long> : std::true_type {};
template<> struct is_integral_impl<long long> : std::true_type {};
template<> struct is_integral_impl<unsigned long long> : std::true_type {};

// C++20 için ayrıca:
// template<> struct is_integral_impl<char8_t> : std::true_type {};

template<typename T>
struct is_integral : is_integral_impl<std::remove_cv_t<T>> {};

template<typename T>
inline constexpr bool is_integral_v = is_integral<T>::value;
