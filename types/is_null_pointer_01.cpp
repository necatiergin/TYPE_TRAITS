template<typename T>
struct is_null_pointer : std::is_same<std::nullptr_t, std::remove_cv_t<T>> {};
