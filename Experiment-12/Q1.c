#include <stdio.h>

// Defining constant values using preprocessor directives
#define PI 3.14159
#define MAX_SIZE 100
#define COUNTRY "India"
#define YEAR 2025

int main() {

    printf("Value of PI: %.5f\n", PI);
    printf("Maximum Size Allowed: %d\n", MAX_SIZE);
    printf("Country: %s\n", COUNTRY);
    printf("Current Year: %d\n", YEAR);

    return 0;
}
