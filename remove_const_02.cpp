template <typename T> struct remove_const { using type = T; };
template <typename T> struct remove_const<const T> { using type = T; };

template<typename T>
using remove_const_t = typename remove_const<T>::type;


int main()
{
	remove_const_t<const volatile int> x1{};
	remove_const_t<const int> x2{};
	remove_const_t<volatile int> x3{};
	remove_const_t<const int*> x4{};
	remove_const_t<int* const> x5{};
}
