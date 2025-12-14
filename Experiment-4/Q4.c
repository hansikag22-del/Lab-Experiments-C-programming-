//4. Declare a static local variable inside a function. Observe how its value persists across function calls.

#include <stdio.h>

void demoFunction() {
    int normalVar = 0;         // normal local variable
    static int staticVar = 0;  // static local variable

    normalVar++;
    staticVar++;

    printf("Normal variable = %d, Static variable = %d\n", normalVar, staticVar);
}

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("Function call %d:\n", i);
        demoFunction();
    }
    return 0;
}
