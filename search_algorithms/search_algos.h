#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
#include <stdlib.h>

void print_array(int *array, size_t inc, size_t size);

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif
