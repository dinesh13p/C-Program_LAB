//Write a program to display Fibonacci series of last term up to 300.

#include <stdio.h>

int main() {
    int a = 0, b = 1, nextTerm = 0;

    // Print the first term
    printf("Fibonacci Series: %d, %d", a, b);

    // Generate and print Fibonacci series up to 300
    nextTerm = a + b;
    while (nextTerm <= 300) {
        printf(", %d", nextTerm);
        a = b;
        b = nextTerm;
        nextTerm = a + b;
    }

    // printf("\n");

    return 0;
}