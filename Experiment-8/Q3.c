/*3. Write a function that accepts pointers as parameters. Pass variables by reference
using pointers and modify their values within the function.*/

#include <stdio.h>

// Function that modifies values using pointers
void modifyValues(int *x, float *y) {
    *x = *x + 10;   // increase integer by 10
    *y = *y * 2;    // double the float value
}

int main() {
    int a = 5;
    float b = 3.5;

    printf("Before function call:\n");
    printf("a = %d, b = %.2f\n", a, b);

    //Call by reference
    modifyValues(&a, &b);

    printf("\nAfter function call:\n");
    printf("a = %d, b = %.2f\n", a, b);

    return 0;
}
