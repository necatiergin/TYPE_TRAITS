#include <iostream>
#include <tuple>
#include <type_traits>

template <typename S, typename T, std::size_t idx = 0>
struct has_type : std::conditional_t<  
	std::is_same_v<std::tuple_element_t<idx, T>, S>, std::true_type,
	// ELSE
	std::conditional_t<(idx == std::tuple_size<T>::value - 1),	std::false_type, has_type<S, T, idx>>>
{};

int main() 
{
	using t = std::tuple<int, char, double>;

	constexpr auto b1 = has_type<int, t>::value;
	constexpr auto b2 = has_type<char, t>::value;
	constexpr auto b3 = has_type<double, t>::value;
}
