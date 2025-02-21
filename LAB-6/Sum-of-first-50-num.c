// Write a program to calculate sum of first 50 natural numbers using recursive function.


#include <stdio.h>

// Recursive function to calculate the sum of natural numbers up to n
int sumNatural(int n) {
    if (n == 1) {
        return 1;  // Base case
    } else {
        return n + sumNatural(n - 1);  // Recursive call
    }
}

int main() {
    int result;

    // Calculate the sum of the first 50 natural numbers
    result = sumNatural(50);

    // Display the result
    printf("Sum of the first 50 natural numbers: %d\n", result);

    return 0;
}