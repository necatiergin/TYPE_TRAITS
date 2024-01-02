template <typename T> struct add_cv { using type = const volatile T; };
template <typename T> struct add_const { using type = const T ; };
template <typename T> struct add_volatile{ using type = volatile T; };

template<typename T>
using add_cv_t = typename add_cv<T>::type;

template<typename T>
using add_const_t = typename add_const<T>::type;

template<typename T>
using add_volatile_t = typename add_volatile<T>::type;


int main()
{
	add_cv_t<int> x1{};
	add_cv_t<int *> x2{};
	add_const_t<int *> x3{};
	add_const_t<const int *> x4{};
	add_volatile_t<int *> x5{};
	add_volatile_t<const int *> x6{};
}
