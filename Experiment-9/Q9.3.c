#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char line[200];

    // Open an existing file in read mode
    fp = fopen("myfile.txt", "r");

    // Check if file opened successfully
    if (fp == NULL) {
        printf("Error! File not found.\n");
        exit(1);
    }

    printf("File content (line by line):\n");

    // Read and display file content line by line
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);  // Close the file
    return 0;
}
