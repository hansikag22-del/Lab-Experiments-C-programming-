/*1. Develop a recursive and non-recursive function FACT(num) to find the factorial of
a number, n!, defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n) = n * FACT(n1). Using this function, write a C program to compute the binomial coefficient.
Tabulate the results for different values of n and r with suitable messages. */


#include <stdio.h>

// Recursive function for factorial
long fact_recursive(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact_recursive(n - 1);
}

// Non-recursive function for factorial
long fact_non_recursive(int n) {
    long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, r;
    long n_fact, r_fact, nr_fact, bin_coeff;

    printf("Enter values for n and r (n >= r): ");
    scanf("%d %d", &n, &r);

    if (r > n || n < 0 || r < 0) {
        printf("Invalid input! Ensure n >= r and n, r are non-negative.\n");
        return 0;
    }

    // Using Recursive
    n_fact = fact_recursive(n);
    r_fact = fact_recursive(r);
    nr_fact = fact_recursive(n - r);
    bin_coeff = n_fact / (r_fact * nr_fact);

    printf("\n====== Using Recursive Factorial ======\n");
    printf("n! = %ld, r! = %ld, (n-r)! = %ld\n", n_fact, r_fact, nr_fact);
    printf("C(%d, %d) = %ld\n", n, r, bin_coeff);

    // Using Non-Recursive
    n_fact = fact_non_recursive(n);
    r_fact = fact_non_recursive(r);
    nr_fact = fact_non_recursive(n - r);
    bin_coeff = n_fact / (r_fact * nr_fact);

    printf("\n====== Using Non-Recursive Factorial ======\n");
    printf("n! = %ld, r! = %ld, (n-r)! = %ld\n", n_fact, r_fact, nr_fact);
    printf("C(%d, %d) = %ld\n", n, r, bin_coeff);

    return 0;
}
