#include <iostream>

#define MY_MACRO std::cout << "hi" << std::endl;

#define MY_FUNCTIONLIKE_MACRO(x) std::cout << #x << std::endl;

#ifndef BLAH
#define BLAH
#endif 

int main() {

    MY_MACRO
    MY_FUNCTIONLIKE_MACRO(hello)

}