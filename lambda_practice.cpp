#include <algorithm>
#include <vector>
#include <iostream>

struct my_struct {

    my_struct(int b) {a=b;}
    int a = 6;
};

int main() {
    std::vector<int> v({6,3,6,2,7,8,1});
    std::sort(v.begin(), v.end());

    for (int i =0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    std::vector<my_struct> v2({6,3,6,2,7,8,1});
    // CHALLENGE #1: Write a lambda function to use as the third argument
    // so that v2 is sorted by the values of a in each my_struct
    std::sort(v2.begin(), v2.end());

    for (int i = 0; i < v2.size(); i++) {
        std::cout << v2[i].a << " ";
    }
    std::cout << std::endl;


}