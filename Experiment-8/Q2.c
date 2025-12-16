/* Perform pointer arithmetic (increment and decrement) on pointers of different data
types. Observe how the memory addresses change and the effects on data access. */

#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'A';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("Original addresses:\n");
    printf("p1 = %p\n", p1);
    printf("p2 = %p\n", p2);
    printf("p3 = %p\n", p3);

    // Increment pointers
    p1++;
    p2++;
    p3++;

    printf("\nAfter increment:\n");
    printf("p1 = %p\n", p1);
    printf("p2 = %p\n", p2);
    printf("p3 = %p\n", p3);

    // Decrement pointers
    p1--;
    p2--;
    p3--;

    printf("\nAfter decrement:\n");
    printf("p1 = %p\n", p1);
    printf("p2 = %p\n", p2);
    printf("p3 = %p\n", p3);

    return 0;
}

