template<bool B, typename T, typename U>
struct conditional { 
	using type = T; 
};

template<typename T, typename U>
struct conditional<false, T, U> {
	using type = U;
};

template< bool B, typename T, typename U >
using conditional_t = typename conditional<B, T, U>::type;

int main()
{
	conditional_t<true, int, double> i = 5; //int i = 5;
	conditional_t<false, int, double> d = 2.3; //double d = 2.3;
}
