//
// Created by mark on 2018/6/27.
//
#include <iostream>
#include <climits>
#include <string>

int main() {
    using namespace std;
    // init variables
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    // show the info
    std::cout << "short  size is " << sizeof(n_short) << std::endl;
    std::cout << "short value is " << n_short << std::endl;
    std::cout << "int  size is " << sizeof(n_int) << std::endl;
    std::cout << "int value is " << n_int << std::endl;
    std::cout << "long  size is " << sizeof(n_long) << std::endl;
    std::cout << "long value is " << n_long << std::endl;
}

