#include <type_traits>

template<typename> struct is_integral_base : std::false_type {};

template<> struct is_integral_base<bool> : std::true_type {};
template<> struct is_integral_base<int> : std::true_type {};
template<> struct is_integral_base<short> : std::true_type {};

template<typename T> 
struct isintegral : is_integral_base<std::remove_cv_t<T>> {};
