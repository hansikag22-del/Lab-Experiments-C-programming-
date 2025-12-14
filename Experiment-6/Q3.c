/*3. Develop a recursive function FIBO (num) that accepts an integer argument. Write
a C program that invokes this function to generate the Fibonacci sequence up to
num. */

#include <stdio.h>

// Recursive function to find nth Fibonacci term
int FIBO(int num) {
    if (num == 0)
        return 0; // Base case 1
    else if (num == 1)
        return 1; // Base case 2
    else
        return FIBO(num - 1) + FIBO(num - 2); // Recursive relation
}

int main() {
    int num, i;

    // Input number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci Sequence up to %d terms:\n", num);

    for (i = 0; i < num; i++) {
        printf("%d ", FIBO(i));
    }

    printf("\n");
    return 0;
}
