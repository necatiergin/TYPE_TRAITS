#include <type_traits>

template<typename T>
struct IsEnum : std::bool_constant<
    std::is_scalar_v<T> &&
    !std::is_arithmetic_v<T> &&
    !std::is_pointer_v<T> &&
    !std::is_member_pointer_v<T> &&
    !std::is_null_pointer_v<T>
> {};

template<typename T>
inline constexpr bool IsEnum_v = IsEnum<T>::value;

enum E1 { A, B };
enum class E2 { X, Y };

struct Nec {};
union Data { int x; double y; };

int main()
{
    static_assert(IsEnum_v<E1>);
    static_assert(IsEnum_v<E2>);
    static_assert(IsEnum_v<const E1>);
    static_assert(IsEnum_v<volatile E2>);

    static_assert(!IsEnum_v<int>);
    static_assert(!IsEnum_v<double>);
    static_assert(!IsEnum_v<bool>);
    static_assert(!IsEnum_v<Nec>);
    static_assert(!IsEnum_v<Data>);
    static_assert(!IsEnum_v<void>);
    static_assert(!IsEnum_v<std::nullptr_t>);
    static_assert(!IsEnum_v<int*>);
    
}
