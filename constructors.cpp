#include <iostream>

class MyClass {
    int my_int = 8;
    int * my_dynamic_int;

    public:

    MyClass(int i) : my_int(i) {
        // my_int = i; // Same as : my_int(i) in declaration
        my_dynamic_int = new int(i);
        std::cout << "In constructor" << std::endl;
    }

    MyClass(MyClass & other) {
        std::cout << "In copy constructor" << std::endl;
        my_int = other.my_int;
        my_dynamic_int = new int(*(other.my_dynamic_int));
    }

    ~MyClass() {
        delete my_dynamic_int;
        std::cout << "In destructor" << std::endl;
    }

    MyClass& operator = (const MyClass &other){
        my_int = other.my_int;
        delete my_dynamic_int;
        my_dynamic_int = new int(*(other.my_dynamic_int));
        std::cout << "Assignment operator called " << std::endl;
        return *this;
    } 

    // MyClass(MyClass & other) = default;
    // MyClass(MyClass & other) = delete;

};

void my_function(MyClass m) {

}

int main() {
    MyClass m1(8);
    MyClass m2(10);

    m1 = m2;
    
    my_function(m1);
}