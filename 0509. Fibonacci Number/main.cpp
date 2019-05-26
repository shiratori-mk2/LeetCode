#include <iostream>
#include <utility>
#include <array>
//  include libraries here for solution.hpp
using namespace std;

#include "solution.hpp"

int main(int argc, char **argv) {
    for(int i = 0; i <= 30; ++i)
        cout << Solution().fib(i) << endl;
    return 0;
}
