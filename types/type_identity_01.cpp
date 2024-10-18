template <typename T>
struct type_identity 
{
	using type = T;
};

template <typename T>
using type_identity_t = type_identity<T>::type;
