#include <iostream>
#include <fstream>

#include "../Empirical/include/emp/io/File.hpp"

int main() {
    std::fstream myfile;

    myfile.open("test.txt", std::ios::out | std::ios::in);
    
    if (!myfile.is_open()) {
        std::cout << "Something went wrong" << std::endl;
        return 1;
    }

    std::string next_line;
    while (getline(myfile, next_line)) {
        std::cout << myfile.bad() << " " << myfile.good() << " " << myfile.eof() << " " << myfile.fail() << std::endl;
        std::cout << next_line << std::endl;
    }

    std::ofstream outfile;
    outfile.open("test2.txt");

    outfile << "another line" << std::endl;

    std::cout << myfile.bad() << " " << myfile.good() << " " << myfile.eof() << " " << myfile.fail() << std::endl;
 
    outfile.close();
    myfile.close();

    emp::File my_emp_file("example.csv");

    std::cout << my_emp_file[1] << std::endl;

    emp::vector<std::string> header = my_emp_file.ExtractRow();
    emp::vector<int> col1 = my_emp_file.ExtractColAs<int>();
    std::cout << emp::to_string(col1) << std::endl;

}