// Define a function named fact() to calculate factorial of a number n and then write a program that uses this function fact() to calculate combination and permutation.


#include <stdio.h>

// Function to calculate factorial
int fact(int n) {
    if (n == 0) {
        return 1;  // Base case: 0! = 1
    } else {
        return n * fact(n - 1);  // Recursive case
    }
}

int main() {
    int n, r;
    int permutation, combination;

    // Input values for n and r
    printf("Enter value for n: ");
    scanf("%d", &n);
    printf("Enter value for r: ");
    scanf("%d", &r);

    // Calculate permutation
    permutation = fact(n) / fact(n - r);

    // Calculate combination
    combination = fact(n) / (fact(r) * fact(n - r));

    // Display results
    printf("\nPermutation P(%d, %d) = %d\n", n, r, permutation);
    printf("Combination C(%d, %d) = %d\n", n, r, combination);

    return 0;
}