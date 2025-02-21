//Write a program to calculate sum of natural numbers upto N


#include <stdio.h>

// Recursive function to calculate sum up to n
int sumUpToN(int n) {
    if (n == 1) {
        return 1;  // Base case
    } else {
        return n + sumUpToN(n - 1);  // Recursive case
    }
}

int main() {
    int N, sum;

    // Input the value of N
    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    // Calculate the sum using the recursive function
    sum = sumUpToN(N);

    // Display the result
    printf("Sum of natural numbers up to %d is: %d\n", N, sum);

    return 0;
}