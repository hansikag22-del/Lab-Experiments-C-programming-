// arith.h
#ifndef ARITH_H
#define ARITH_H

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divide(int a, int b);

#endif


// use_shared.c
#include <stdio.h>
#include "arith.h"   // Header file of shared library

int main() {
    int x = 12, y = 4;

    printf("Using Shared Library Functions:\n");
    printf("Add: %d\n", add(x, y));
    printf("Sub: %d\n", sub(x, y));
    printf("Mul: %d\n", mul(x, y));
    printf("Div: %d\n", divide(x, y));

    return 0;
}
