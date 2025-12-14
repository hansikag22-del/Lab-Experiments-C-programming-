/*2. Declare a local variable inside a function and try to access it outside the function.
Compare this with accessing the global variable from within the function.*/


#include <stdio.h>

// Global variable declaration
int globalVar = 10;

// Function that declares a local variable
void myFunction() {
    int localVar = 5;  // local variable inside myFunction
    printf("Inside myFunction:\n");
    printf("Local variable localVar = %d\n", localVar);       // Accessible here
    printf("Global variable globalVar = %d\n", globalVar);    // Accessible here
}

int main() {
    myFunction();

    printf("\nInside main:\n");
    printf("Global variable globalVar = %d\n", globalVar);    // Accessible here

    // Uncommenting the following line will cause a compilation error,
    // because localVar is not visible outside myFunction.
    // printf("Local variable localVar = %d\n", localVar);    // ERROR!

    return 0;
}