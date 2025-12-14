#include <stdio.h>

// Structure to represent a complex number
struct Complex {
    float real;
    float imag;
};

// Function to read a complex number
struct Complex readComplex() {
    struct Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}

// Function to display a complex number
void writeComplex(struct Complex c) {
    if (c.imag >= 0)
        printf("%.2f + %.2fi\n", c.real, c.imag);
    else
        printf("%.2f - %.2fi\n", c.real, -c.imag);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to subtract two complex numbers
struct Complex subtractComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

// Main function
int main() {
    struct Complex num1, num2, sum, diff;

    printf("Enter first complex number:\n");
    num1 = readComplex();

    printf("\nEnter second complex number:\n");
    num2 = readComplex();

    sum = addComplex(num1, num2);
    diff = subtractComplex(num1, num2);

    printf("\nFirst Complex Number: ");
    writeComplex(num1);

    printf("Second Complex Number: ");
    writeComplex(num2);

    printf("\nSum: ");
    writeComplex(sum);

    printf("Difference: ");
    writeComplex(diff);

    return 0;
}

