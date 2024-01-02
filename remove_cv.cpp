template <typename T> struct remove_cv { using type = T; };
template <typename T> struct remove_cv<const T> { using type = T; };
template <typename T> struct remove_cv<volatile T> { using type = T; };
template <typename T> struct remove_cv<const volatile T> { typedef T type; };

template <typename T>
using remove_cv_t = typename remove_cv<T>::type;

int main()
{
	remove_cv_t<const volatile int> x1{};
	remove_cv_t<const int> x2{};
	remove_cv_t<volatile int> x3{};
	remove_cv_t<const int*> x4{};
	remove_cv_t<const volatile int*> x5{};
	remove_cv_t<int* const> x6{};
	remove_cv_t<int* const volatile> x7{};
}
