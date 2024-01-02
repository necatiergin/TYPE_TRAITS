#include <iostream>
#include <type_traits>

template <typename T>
T func(T x, T y) 
{
	return x + y;
}

template <typename T>
T foo(T x, std::type_identity_t<T> y) 
{
	return x + y;
}

int main()
{
	//func(1.2, 4.5f); // invalid
	std::cout << foo(2.3, 3.4f) << '\n';  // foo<double>
}
