/*5. Develop a function REVERSE (str) that accepts a string argument. Write a C program that invokes this function to find the reverse of a given string.*/

#include <stdio.h>
#include <string.h>

// Function to reverse a string
void REVERSE(char str[]) {
    int i, len;
    char temp;

    len = strlen(str);  // Get string length

    // Swap characters from both ends
    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    REVERSE(str);  // Call the reverse function

    printf("Reversed string: %s\n", str);

    return 0;
}

