#include <stdio.h>
#include <stdlib.h> // For abs()

int main() {
    float x1, y1, x2, y2, x3, y3;
    float area;

    // Input coordinates
    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    printf("Enter coordinates of third point (x3 y3): ");
    scanf("%f %f", &x3, &y3);

    // Calculate area using determinant formula
    area = 0.5 * (x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2));

    // Use a small threshold to handle floating point precision
    if (area == 0) {
        printf("The points are collinear.\n");
    } else {
        printf("The points are not collinear.\n");
    }

    return 0;
}