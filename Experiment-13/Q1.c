#include <stdio.h>

// Defining arithmetic macros
#define ADD(a, b) ((a) + (b))
#define SUB(a, b) ((a) - (b))
#define MUL(a, b) ((a) * (b))
#define DIV(a, b) ((b) != 0 ? ((a) / (b)) : 0)
#define MOD(a, b) ((b) != 0 ? ((a) % (b)) : 0)

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\nArithmetic Operations Using Macros\n");

    printf("Addition (x + y)        = %d\n", ADD(x, y));
    printf("Subtraction (x - y)     = %d\n", SUB(x, y));
    printf("Multiplication (x * y)  = %d\n", MUL(x, y));
    printf("Division (x / y)        = %d\n", DIV(x, y));
    printf("Modulus (x %% y)        = %d\n", MOD(x, y));

    return 0;
}
