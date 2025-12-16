/*1. Declare different types of pointers (int, float, char) and initialize them with the
addresses of variables. Print the values of both the pointers and the variables they
point to.*/

#include <stdio.h>

int main() {
    int a = 10;
    float b = 20.5;
    char c = 'A';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("Value of a = %d, Address = %p\n", a, p1);
    printf("Value of b = %.2f, Address = %p\n", b, p2);
    printf("Value of c = %c, Address = %p\n", c, p3);

    printf("\nUsing pointers:\n");
    printf("*p1 = %d\n", *p1);
    printf("*p2 = %.2f\n", *p2);
    printf("*p3 = %c\n", *p3);

    return 0;
}

