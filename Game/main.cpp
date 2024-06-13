#include "include/HelloWorld.hpp"

#include <iostream>

int main() {
    HelloWorld hw = HelloWorld();

    std::cout << hw.say() << '\n';

    return 0;
}