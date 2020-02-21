#include <iostream>
#include "hello.h"

int main(int argc, char *argv[])
{
    Hello hello;
    std::cout << hello.greet() << std::endl;
    return 0;
}