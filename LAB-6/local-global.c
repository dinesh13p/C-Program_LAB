// Write a program that illustrates use of local, global and static variables.


#include <stdio.h>

int globalVar = 0;  // Global variable

void testVariables() {
    int localVar = 0;       // Local variable
    static int staticVar = 0;  // Static variable

    // Increment each variable
    globalVar++;
    localVar++;
    staticVar++;

    // Display the values
    printf("Global variable: %d\n", globalVar);
    printf("Local variable: %d\n", localVar);
    printf("Static variable: %d\n\n", staticVar);
}

int main() {
    // Call the function multiple times to see variable behavior
    testVariables();
    testVariables();
    testVariables();

    return 0;
}