#include <type_traits>
#include <iostream>

void foo(int)
{
	std::cout << "int\n";
}

void foo(double)
{
	std::cout << "double\n";
}

template <typename T>
void func(T x)
{
	foo(std::conditional_t<std::is_floating_point_v<T>, double, int>{});;
}

int main()
{
	func(20);
	func(2.3);
}
