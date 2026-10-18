#include <type_traits>

enum Color { Red, Green, Blue };

enum class Status { Success, Failure };

enum struct Direction { North, South };

int main()
{
    static_assert(std::is_enum_v<Color>);
    static_assert(std::is_enum_v<Status>);
    static_assert(std::is_enum_v<Direction>);

    static_assert(!std::is_enum_v<int>);
    static_assert(!std::is_enum_v<double>);
    static_assert(!std::is_enum_v<bool>);
    static_assert(!std::is_enum_v<void>);
}
