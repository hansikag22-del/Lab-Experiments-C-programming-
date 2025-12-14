#include <stdio.h>
#include <math.h>  // For pow() function

int main() {
    float a, b, c;

    // Input sides of triangle
    printf("Enter three sides of the triangle:\n");
    scanf("%f %f %f", &a, &b, &c);

    // Check triangle validity using Triangle Inequality Theorem
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Triangle is valid.\n");

        // Check for Equilateral
        if (a == b && b == c) {
            printf("It is an Equilateral triangle.\n");
        }
        // Check for Isosceles
        else if (a == b || b == c || a == c) {
            printf("It is an Isosceles triangle.\n");
        }
        // Check for Right-angled
        else if (
            fabs(a * a - (b * b + c * c)) < 0.0001 ||
            fabs(b * b - (a * a + c * c)) < 0.0001 ||
            fabs(c * c - (a * a + b * b)) < 0.0001) {
            printf("It is a Right-angled triangle.\n");
        }
        // If none of the above, it's Scalene
        else {
            printf("It is a Scalene triangle.\n");
        }
    } else {
        printf("Triangle is not valid.\n");
    }

    return 0;
}
