// arith.h
#ifndef ARITH_H
#define ARITH_H

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divide(int a, int b);

#endif



// use_library.c
#include <stdio.h>
#include "arith.h"   // Include the header of the static library

int main() {
    int x = 15, y = 5;

    printf("Using Static Library Functions:\n");
    printf("Add: %d\n", add(x, y));
    printf("Sub: %d\n", sub(x, y));
    printf("Mul: %d\n", mul(x, y));
    printf("Div: %d\n", divide(x, y));

    return 0;
}
