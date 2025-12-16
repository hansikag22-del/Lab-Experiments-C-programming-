#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch;

    // Open an existing file in read mode
    fp = fopen("myfile.txt", "r");

    // Check if file exists
    if (fp == NULL) {
        printf("Error! File not found.\n");
        exit(1);
    }

    printf("File content:\n");

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);  // print character to console
    }

    fclose(fp);  // Close the file
    return 0;
}
