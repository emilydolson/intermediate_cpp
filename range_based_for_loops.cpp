#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main() {

    std::vector<int> v = {1,3,5,7,2};
    std::map<int, std::string> m;

    m[4] = "hi";
    m[1] = "world";


    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << std::endl;
    }

    for (int i : v) {
        std::cout << i << std::endl;
    }

    for (std::pair<const int, std::string> & element : m) {
        std::cout << element.second << std::endl;
        element.second = "good morning";
    }

    for (const std::pair<const int, std::string> & element : m) {
        std::cout << element.second << std::endl;
    }

    for (auto & element : m) {
        std::cout << element.second << std::endl;
        element.second = "good morning";
    }

    auto result = std::find(v.begin(), v.end(), 5);
    std::cout << *result << std::endl;


}