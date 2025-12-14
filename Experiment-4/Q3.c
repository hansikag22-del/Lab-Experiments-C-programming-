//3. Declare variables within different code blocks (enclosed by curly braces) and test their accessibility within and outside those blocks.

#include <stdio.h>

int main() {
    int x = 10;  // Variable declared in main block

    printf("Outside any inner block, x = %d\n", x);

    // Start of first inner block
    {
        int y = 20;  // Variable declared inside first inner block
        printf("Inside first block, x = %d, y = %d\n", x, y);

        // Start of nested block inside first block
        {
            int z = 30;  // Variable declared inside nested block
            printf("Inside nested block, x = %d, y = %d, z = %d\n", x, y, z);
        } // End of nested block

        // Trying to access z here would cause an error:
        // printf("%d\n", z); // ERROR: z undefined here
    } // End of first inner block

    // Trying to access y here would cause an error:
    // printf("%d\n", y); // ERROR: y undefined here

    // x is still accessible here
    printf("Back in main block, x = %d\n", x);

    return 0;
}