// Write a program to add, subtract, multiply and divide two integers using user defined type function with return type.

#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two numbers
int subtract(int a, int b) {
    return a - b;
}

// Function to multiply two numbers
int multiply(int a, int b) {
    return a * b;
}

// Function to divide two numbers (returns float)
float divide(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Error: Division by zero.\n");
        return 0;
    }
}

int main() {
    int num1, num2;

    // Input two integers
    printf("Enter two integers:\n");
    scanf("%d %d", &num1, &num2);

    // Perform operations and display results
    printf("Addition: %d\n", add(num1, num2));
    printf("Subtraction: %d\n", subtract(num1, num2));
    printf("Multiplication: %d\n", multiply(num1, num2));

    // Division with check for zero
    if (num2 != 0) {
        printf("Division: %.2f\n", divide(num1, num2));
    }

    return 0;
}