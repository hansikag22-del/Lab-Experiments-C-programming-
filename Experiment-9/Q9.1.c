#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char text[200];

    // Open file in write mode
    fp = fopen("myfile.txt", "w");

    // Check if file opened successfully
    if (fp == NULL) {
        printf("Error! Could not create file.\n");
        exit(1);
    }

    printf("Enter text to write into the file:\n");
    fgets(text, sizeof(text), stdin);  // read input string

    // Write text to file
    fputs(text, fp);

    printf("Data written successfully to 'myfile.txt'.\n");

    fclose(fp); // Close file
    return 0;
}
