#include <type_traits>

template<typename T>
struct is_pointer_helper : std::false_type {};

template<typename T>
struct is_pointer_helper<T*> : std::true_type {};

template<typename T>
struct is_pointer : is_pointer_helper< typename std::remove_cv<T>::type > {};
