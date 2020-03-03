#include "hello.h"
#include <iostream>
#include <omp.h>

char* Hello::greet() {
    return (char *)"Hello Static Library!";
}

int omp_sum()
{
    int total = 0;

    #pragma omp parallel for reduction(+:total)
    for (int i = 0; i < omp_get_num_threads(); i++) {
        total += omp_get_thread_num(); 
    }
    return total;
}
 
