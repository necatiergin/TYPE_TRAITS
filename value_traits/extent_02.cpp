#include <type_traits>
#include <cstddef>

template<typename T, unsigned N = 0>
struct Extent : std::integral_constant<std::size_t, 0> {};

// 1. Known bound array, first dimension
template<typename T, std::size_t Size>
struct Extent<T[Size], 0>
    : std::integral_constant<std::size_t, Size> {};

// 2. Known bound array, other dimensions
template<typename T, std::size_t Size, unsigned N>
struct Extent<T[Size], N>
    : Extent<T, N - 1> {};

// 3. Unknown bound array, first dimension
template<typename T>
struct Extent<T[], 0>
    : std::integral_constant<std::size_t, 0> {};

// 4. Unknown bound array, other dimensions
template<typename T, unsigned N>
struct Extent<T[], N>
    : Extent<T, N - 1> {};
