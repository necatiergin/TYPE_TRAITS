#include <vector>
#include <type_traits>
#include <iostream>

template <typename T>
void func(T x)
{
	std::conditional_t<std::is_floating_point_v<T>, int, double> val{};
	std::cout << typeid(val).name() << "\n";
}

int main()
{
	func(20);
	func(2.3);
}
