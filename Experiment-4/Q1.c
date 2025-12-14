//1. Declare a global variable outside all functions and use it inside various functions to understand its accessibility.

#include <stdio.h>

// Global variable declaration
int counter = 0;

// Function to increment counter
void increment() {
    counter++;
    printf("Counter in increment(): %d\n", counter);
}

// Function to double the counter
void doubleCounter() {
    counter *= 2;
    printf("Counter in doubleCounter(): %d\n", counter);
}

int main() {
    printf("Initial counter: %d\n", counter);

    increment();       // counter = 1
    doubleCounter();   // counter = 2
    increment();       // counter = 3

    printf("Final counter in main(): %d\n", counter);

return 0;
}
