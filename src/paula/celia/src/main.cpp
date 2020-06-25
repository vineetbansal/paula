#include <iostream>
#include "hello.h"
#include "version.h"

int main(int argc, char *argv[])
{
    Hello hello;
    std::cout << hello.greet() << std::endl;
    std::cout << "OMP thread id sum = " << omp_sum() << std::endl;
    std::cout << "Version number = " << MY_VERSION << std::endl;
    return 0;
}
