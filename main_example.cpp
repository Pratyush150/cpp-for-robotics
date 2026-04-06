#include <iostream>

int main(int argc, char* argv[]) {
    std::cout << "Welcome to the C++ tutorial!" << std::endl;

    std ::cout << "This tutorial will cover the basics of C++ programming, including syntax, data types, control structures, functions, and more." << std::endl;
    for(int i = 0; i < 5; ++i) {
        std::cout << "This is line " << i + 1 << " of the tutorial." << std::endl;
    }
    return 0;
}