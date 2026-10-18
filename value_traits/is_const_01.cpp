#include <type_traits>

template<typename T> struct is_const : std::false_type {};
template<typename T> struct is_const<const T> : std::true_type {};
