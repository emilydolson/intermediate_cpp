#include <iostream>
#include <vector>
#include "base/Ptr.hpp"

// class my_class {
//     private:
//         int & member_int;



// };


int my_function(std::vector<int> & v) {
    return v.size();
}

// int main() {
//     int * my_int_ptr;
//     int my_int = 6;
//     my_int_ptr = &my_int;
//     std::cout << "My int = " << my_int << std::endl;
//     std::cout << "My int pointer is pointing at " << *my_int_ptr << std::endl;
//     std::cout << "My int pointer: " << my_int_ptr << std::endl;

//     int & my_int_ref = my_int;

//     std::cout << "My int ref: " << my_int_ref << std::endl;

//     my_int = 10;
    
//     std::cout << "My int ref after change: " << my_int_ref << std::endl;

//     std::vector<int> vec;
//     for (int i=0; i < 100000000; i++) {
//         vec.push_back(i);
//     }

//     // my_function(vec);

//     int * dynamic_memory_int = new int(10);
//     std::cout << "Dynamicly allocated int: " << *dynamic_memory_int << std::endl;

//     my_int_ptr = nullptr;

//     if (my_int_ptr == nullptr) {
//         // handle null
//     }

//     // Be careful of this
//     int * my_vector_var = &vec[80];

//     delete dynamic_memory_int;
    
    
// }

int main() {
    emp::Ptr<int> my_int_ptr;
    int my_int = 6;
    my_int_ptr = &my_int;
    std::cout << "My int = " << my_int << std::endl;
    std::cout << "My int pointer is pointing at " << *my_int_ptr << std::endl;
    std::cout << "My int pointer: " << my_int_ptr << std::endl;

    int & my_int_ref = my_int;

    std::cout << "My int ref: " << my_int_ref << std::endl;

    my_int = 10;
    
    std::cout << "My int ref after change: " << my_int_ref << std::endl;

    std::vector<int> vec;
    for (int i=0; i < 100000000; i++) {
        vec.push_back(i);
    }

    // my_function(vec);

    emp::Ptr<int> dynamic_memory_int;
    dynamic_memory_int.New(10);
    std::cout << "Dynamicly allocated int: " << *dynamic_memory_int << std::endl;

    my_int_ptr = nullptr;

    if (my_int_ptr == nullptr) {
        // handle null
    }

    // Be careful of this
    int * my_vector_var = &vec[80];

    dynamic_memory_int.Delete();
    
    
}