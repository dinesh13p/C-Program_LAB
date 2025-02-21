// Write a C program to calculate sum of the natural number up to N number using recursive function.


#include <stdio.h>

// Recursive function to calculate the n-th Fibonacci number
int fibonacci(int n) {
    if (n == 0) {
        return 0;  // Base case: 0th term is 0
    } else if (n == 1) {
        return 1;  // Base case: 1st term is 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case
    }
}

int main() {
    int terms;

    // Input number of terms
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &terms);

    // Display the Fibonacci series up to the given number of terms
    printf("Fibonacci series: ");
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}