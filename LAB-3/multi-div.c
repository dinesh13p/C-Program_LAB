// Write a program that asks a number and test the number whether it is multiple of 5 or not, divisible by 7 but not by eleven.

#include <stdio.h>
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is a multiple of 5
    if (num % 5 == 0) {
        printf("%d is a multiple of 5.\n", num);
    } else {
        printf("%d is not a multiple of 5.\n", num);
    }

    // Check if the number is divisible by 7 but not by 11
    if (num % 7 == 0 && num % 11 != 0) {
        printf("%d is divisible by 7\n", num);
    } else {
        printf("%d is not divisible by 11.\n", num);
    }

    return 0;
}