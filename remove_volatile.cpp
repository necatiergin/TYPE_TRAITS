template <typename T> struct remove_volatile { using type = T; };
template <typename T> struct remove_volatile<volatile T> { using type = T; };

template< class T >
using remove_volatile_t = typename remove_volatile<T>::type;


int main()
{
	remove_volatile_t<int> x1{};
	remove_volatile_t<volatile int> x2{};
	remove_volatile_t<volatile int *> x3{};
	remove_volatile_t<int * volatile> x4{};
}
