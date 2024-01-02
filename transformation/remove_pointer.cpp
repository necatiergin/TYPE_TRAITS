template <typename T> struct remove_pointer { typedef T type; };
template <typename T> struct remove_pointer<T*> { typedef T type; };
template <typename T> struct remove_pointer<T* const> { typedef T type; };
template <typename T> struct remove_pointer<T* volatile> { typedef T type; };
template <typename T> struct remove_pointer<T* const volatile> { typedef T type; };

template <typename T>
using remove_pointer_t = typename remove_pointer<T>::type;
