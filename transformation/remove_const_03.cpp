template <typename T>
struct TypeIdentity {
	using type = T;
};

template <typename T>
struct remove_const : TypeIdentity<T>{};

template<typename T>
struct remove_const<const T> : TypeIdentity<T>{};

template <typename T>
using remove_const_t = typename remove_const<T>::type;
