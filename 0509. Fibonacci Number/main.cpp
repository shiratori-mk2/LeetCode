#include <iostream>
#include <utility>
#include <array>
//
//  include libraries here for solution.hpp 
//
#include "solution.hpp"

int main(int argc, char **argv) {
    for(int i = 0; i <= 30; ++i)
        std::cout << Solution().fib(i) << std::endl;
    return 0;
}
