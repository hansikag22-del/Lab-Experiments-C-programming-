#include <stdio.h>

int main() {
    int num;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;
    char choice;

    do {
        // Input number
        printf("Enter a number: ");
        scanf("%d", &num);

        // Count based on value
        if (num > 0)
            positiveCount++;
        else if (num < 0)
            negativeCount++;
        else
            zeroCount++;

        // Ask user if they want to continue
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);  // Notice the space before %c to consume newline

    } while (choice == 'y' || choice == 'Y');

    // Display results
    printf("\nSummary:\n");
    printf("Positive numbers: %d\n", positiveCount);
    printf("Negative numbers: %d\n", negativeCount);
    printf("Zeroes: %d\n", zeroCount);

    return 0;
}