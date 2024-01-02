template <typename T > struct remove_reference     {using type = T;};
template <typename T > struct remove_reference<T&> {using type = T;};
template <typename T > struct remove_reference<T&&>{using type = T;};

template <typename T>
using remove_reference_t = typename remove_reference<T>::type;

int main()
{
	remove_reference_t<int&> x{ 3 };  //int x
	remove_reference_t<int&&> y{ 3
