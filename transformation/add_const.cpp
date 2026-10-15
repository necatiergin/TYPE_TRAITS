#include <type_traits>

template<typename T>
struct AddConst {
    using type = const T;
};


template<typename T>
using AddConst_t = typename AddConst<T>::type;

static_assert(std::is_same_v<AddConst_t<int>, const int>);
static_assert(std::is_same_v<AddConst_t<const int>, const int>);

static_assert(std::is_same_v<AddConst_t<int*>, int* const>);
static_assert(std::is_same_v<AddConst_t<const int*>, const int* const>);

static_assert(std::is_same_v<AddConst_t<int&>, int&>);
