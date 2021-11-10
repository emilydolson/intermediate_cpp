#include <iostream>
#include <type_traits>

// constexpr int summation();
// constexpr int summation() {
//     int total = 0;
//     for (int i = 0; i < 100000000; i++) {
//         total++;
//     }
//     return total;
// }
constexpr long int fib(int n) {
    return (n <= 1)? n : fib(n-1) + fib(n-2);
}

template <typename T>
class A {
    public:
    void DoSomething() {
        if constexpr (std::is_arithmetic<T>::value) {
            std::cout << 6 + 6 << std::endl;
        } else {
            std::cout << "hello" << std::endl;
        }
    }

};

int main() {

    const long int result = fib(30);

    A<int> a_int;
    a_int.DoSomething();
    A<std::string> a_string;
    a_string.DoSomething();

}