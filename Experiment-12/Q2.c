#include <stdio.h>

// Function-like macro to calculate square
#define SQUARE(x) ((x) * (x))

// Macro to find maximum of two numbers
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int num1, num2;

    printf("Enter a number: ");
    scanf("%d", &num1);

    printf("Square of %d = %d\n", num1, SQUARE(num1));

    printf("\nEnter two numbers: ");
    scanf("%d %d", &num2, &num1);

    printf("Maximum of %d and %d = %d\n", num2, num1, MAX(num2, num1));

    return 0;
}
