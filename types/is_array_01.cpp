#include <type_traits>
#include <iostream>

template<typename T>
struct IsArray : std::false_type {};

template<typename T>
struct IsArray<T[]> : std::true_type {};

template<class T, std::size_t N>
struct IsArray<T[N]> : std::true_type {};

template<typename T>
constexpr bool IsArray_v = IsArray<T>::value;

int main()
{
	std::cout << std::boolalpha;
	std::cout << IsArray_v<int> << "\n";
	std::cout << IsArray_v<int []> << "\n";
	std::cout << IsArray_v<const int []> << "\n";
	std::cout << IsArray_v<int [5]> << "\n";
}
