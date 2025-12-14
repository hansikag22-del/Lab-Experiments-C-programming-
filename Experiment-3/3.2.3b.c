/*WAP TO GENERATE THE FOLLOWING SET OF OUTPUT.
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1*/

#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate combination C(n, r)
int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int rows = 5;

    // Loop through rows
    for (int i = 0; i < rows; i++) {
        // Print leading spaces for formatting
        for (int space = 0; space < rows - i - 1; space++) {
            printf(" ");
        }

        // Loop through values in the row
        for (int j = 0; j <= i; j++) {
            printf("%d ", combination(i, j));
        }

        printf("\n");
    }

    return 0;
}