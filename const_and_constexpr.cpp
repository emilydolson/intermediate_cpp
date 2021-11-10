#include <iostream>

class my_class {

    private:
        int a = 9;

    public:
        int GetA() const {return a;}
        void SetA(int new_a) {a = new_a;}

};

int my_function(const my_class &) {
    return 0;
}

int my_function_non_const(my_class &) {
    return 0;
}

int main() {
    const my_class example;
    my_class example_non_const;
    std::cout << example.GetA() << std::endl;

    my_function(example);
    my_function(example_non_const);
    my_function_non_const(example);


}