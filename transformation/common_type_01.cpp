#include <type_traits>

int main()
{
    using T1 = std::common_type<int, double>::type;
    using T2 = std::common_type_t<int, long>;
    using T3 = std::common_type_t<float, double>;

    static_assert(std::is_same_v<T1, double>);
    static_assert(std::is_same_v<T2, long>);
    static_assert(std::is_same_v<T3, double>);
}
