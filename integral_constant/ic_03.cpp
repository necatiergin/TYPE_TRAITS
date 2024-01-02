#include <type_traits>

int main()
{
	constexpr auto val = std::integral_constant<int, 5>{} + std::integral_constant<int, 3>{};
}
