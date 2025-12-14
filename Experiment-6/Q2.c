/*2. Develop a recursive function GCD (num1, num2) that accepts two integer 
arguments. Write a C program that invokes this function to find the greatest
common divisor of two given integers. */

#include <stdio.h>

// Recursive function to find GCD
int GCD(int num1, int num2)
 {
    // Base case: if second number becomes 0
    if (num2 == 0)
        return num1;
    else
        // Recursive step
        return GCD(num2, num1 % num2);
}

int main() {
    int a, b, result;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Handle negative inputs
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    // Function call
    result = GCD(a, b);

    // Display result
    printf("The GCD of %d and %d is: %d\n", a, b, result);

    return 0;
}

