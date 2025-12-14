#include <stdio.h>
int main() {
    float weight, height, bmi;

    // Input weight and height
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    // Check for zero or negative height
    if (height <= 0) {
        printf("Invalid height. Height must be greater than 0.\n");
        return 1;
    }

    // Calculate BMI
    bmi = weight / (height * height);

    // Print BMI
    printf("Your BMI is: %.2f\n", bmi);

    // Check BMI category
    if (bmi < 18.5) {
        printf("You are Underweight.\n");
    } else if (bmi >= 18.5 && bmi < 24.9) {
        printf("You have Normal weight.\n");
    } else if (bmi >= 25 && bmi < 29.9) {
        printf("You are Overweight.\n");
    } else {
        printf("You are Obese.\n");
    }

    return 0;
}