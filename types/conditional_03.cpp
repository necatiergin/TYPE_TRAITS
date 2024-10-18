#include <type_traits>

int main()
{
	std::conditional_t <(sizeof(int) > 2), int, short > x = 5;
}
