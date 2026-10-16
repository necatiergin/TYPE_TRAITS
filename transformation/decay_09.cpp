#include <type_traits>
#include <utility>

template<typename T>
void foo(T&& arg)
{
    using A = T;
    using B = std::decay_t<T>;
}
