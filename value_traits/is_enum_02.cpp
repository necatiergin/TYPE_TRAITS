// using compiler intrinsic

template<typename T>
struct IsEnum :
    std::bool_constant<__is_enum(T)> {
};

template<typename T>
inline constexpr bool IsEnum_v = IsEnum<T>::value;
