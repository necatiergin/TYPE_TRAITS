#include <type_traits>
#include <iostream>

template <typename T>
struct IsVoid : std::is_same<void, std::remove_cv_t<T>> {};

template<typename T>
constexpr bool IsVoid_v = IsVoid<T>::value;

int main()
{
	std::cout << std::boolalpha;
	std::cout << IsVoid_v<int> << "\n";
	std::cout << IsVoid_v<void> << "\n";
	std::cout << IsVoid_v<const void> << "\n";
}
