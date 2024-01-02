#include <type_traits>

int main()
{
	constexpr std::integral_constant<int, 5> x;
	constexpr std::integral_constant<int, 2> y;

	constexpr auto val = x + y + x() + y(); //val ==> 14
}
