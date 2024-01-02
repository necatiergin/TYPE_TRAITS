#include <type_traits>
#include <iostream>
#include <cstdint>

//is_same tür ilişkisi trait'inin gerçekleştirimi

template<class T, class U>
struct IsSame : std::false_type {};

template<class T>
struct IsSame<T, T> : std::true_type {};

template<typename T, typename U>
inline constexpr bool IsSame_v = IsSame<T, U>::value;

int main()
{
	std::cout << std::boolalpha;
	std::cout << IsSame_v<int, int> << "\n"; //true
	std::cout << IsSame_v<int, const int> << "\n"; //false
	std::cout << IsSame_v<int, unsigned> << "\n"; //false
	std::cout << IsSame_v<int, std::int32_t> << "\n"; //true or false
}
