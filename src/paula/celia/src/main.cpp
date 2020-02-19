#include <iostream>
#include "hello.h"

int main(int argc, char *argv[])
{
    Hello hi;
    std::cout << hi.greet() << std::endl;
    return 0;
}