// Write a C program to find input number is prime or composite.

#include <stdio.h>
int main(){
    int num, i, isPrime = 1;

    // Input a number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is less than or equal to 1
    if (num <= 1) {
        printf("%d is neither prime nor composite.\n", num);
        return 0;
    }

    // Check for factors from 2 to sqrt(num) (optimization)
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;  // If a factor is found, set isPrime to false (0)
            break;
        }
    }
    return 0;
}