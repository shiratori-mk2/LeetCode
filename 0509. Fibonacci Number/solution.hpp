template<size_t N>
constexpr int fibonacci () {
    return fibonacci<N-1>() + fibonacci<N-2>();
}

template<>
constexpr int fibonacci<0>() {
    return 0;
}

template<>
constexpr int fibonacci<1>() {
    return 1;
}

template <size_t N>
struct fibonacci_array {
   std::array<int, N> values;

   template <int ... Is>
   constexpr fibonacci_array (std::integer_sequence<int, Is...> const &)
      : values{ { fibonacci<Is>()... } } {}

   constexpr fibonacci_array ()
      : fibonacci_array{std::make_integer_sequence<int, N>{}} {}

   int operator [] (size_t pos) const {
       return values[pos];
    }
 };

class Solution {
public:
    int fib(int N) {
        static fibonacci_array<31> fibs;
        return fibs[N];
    }
};
