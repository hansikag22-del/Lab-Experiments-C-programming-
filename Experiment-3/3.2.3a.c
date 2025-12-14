/*3. WAP to generate the following set of output.
a.
1
2 3
4 5 6*/


#include <stdio.h>

int main() {
    int num = 1;
    for (int i = 1; i <= 3; i++) { // Outer loop for rows
        // Print leading spaces for centering
        for (int j = 1; j <= (3 - i); j++) {
            printf(" "); // One spaces for alignment
        }
        
        // Print numbers in the current row
        for (int k = 1; k <= i; k++) {
            printf("%d ", num++);
        }
        printf("\n"); // Newline after each row
    }
    return 0;
}