#include <iostream>
#include <functional>

int my_function(int i) {return i;};

std::function<int(int)> my_function_lambda = [](int i){return i;};


std::function<int(int)> squarelambda = [](int i){int test = 8; return i*i;};


int main() {

    int my_int = 8;

    std::function<int(int)> increment_int = [&my_int](int i){my_int += i; return my_int;};

    increment_int(5);
    increment_int(2);

    std::cout << my_int << std::endl;
}