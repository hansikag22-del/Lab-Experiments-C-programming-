/*4. Develop a C function ISPRIME (num) that accepts an integer argument and
returns 1 if the argument is prime, a 0 otherwise. Write a C program that invokes
this function to generate prime numbers between the given ranges.*/

#include <stdio.h>

// Function to check if a number is prime
int ISPRIME(int num) {
    int i;

    // 0 and 1 are not prime
    if (num <= 1)
        return 0;

    // Check divisibility from 2 to num/2
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0; // Not prime
    }

    return 1; // Prime
}

int main() {
    int lower, upper, i;

    // Input range
    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    printf("Prime numbers between %d and %d are:\n", lower, upper);

    // Generate and print primes in range
    for (i = lower; i <= upper; i++) {
        if (ISPRIME(i))
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
