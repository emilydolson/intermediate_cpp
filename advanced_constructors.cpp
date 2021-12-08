#include <vector>
#include <iostream>

class A {
    protected:
    int a;
    int b;
    int c;

    public:
    A(int in_a) : 
        a(in_a),
        b(8) {

    }

    virtual ~A(){std::cout << "Destructing A" <<std::endl;}
};

class B : public A {

    int d;
    
    public:
    B() : A(2) , d(9) {}

    ~B(){std::cout << "Destructing B" <<std::endl;}

};


int main() {
    A my_variable(4);
    A* my_b = new B();

    delete my_b;

    // A* b_ptr = dynamic_cast<A*>(my_b);

    // std::vector<A*> vec;
    // vec.push_back(&my_variable);
    // vec.push_back(my_b);

    
}