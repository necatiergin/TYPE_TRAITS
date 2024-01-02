#include <type_traits>
#include <iostream>

int main()
{
	using namespace std;
	cout << boolalpha;
	
	using itype = int;
	cout << is_const<itype>::value << '\n'; 

	using ValueType = is_const<itype>::value_type;	
	using Type = is_const<itype>::type;				
	
	cout << is_same<ValueType, bool>::value << '\n'; 
	cout << is_same<Type, integral_constant<bool, false>>::value << '\n'; 
	cout << is_same<Type, bool_constant<false>>::value << '\n'; 
	constexpr auto ic = is_const<itype>(); 
	cout << is_same<decltype(ic), is_const<int>>::value << '\n'; 	
	cout << ic() << '\n'; 
	
	static constexpr auto mytypeIsConst = is_const<itype>{};
	
	if constexpr (mytypeIsConst) {} 
	static_assert(!std::is_const<itype>{}, "itype const olmamali");
}
