// Write a program to check odd or even number (a) using modulus operator (b) using bitwise operator (c) without using bitwise and modulus operator (d) using conditional operator.

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // a) Using modulus operator
    if (num % 2 == 0) {
        printf("(a) %d is Even (using modulus operator)\n", num);
    } else {
        printf("(a) %d is Odd (using modulus operator)\n", num);
    }

    // b) Using bitwise operator
    if ((num & 1) == 0) {
        printf("(b) %d is Even (using bitwise operator)\n", num);
    } else {
        printf("(b) %d is Odd (using bitwise operator)\n", num);
    }

    // c) Without using bitwise or modulus operator
    if ((num / 2) * 2 == num) {
        printf("(c) %d is Even (without using bitwise and modulus operators)\n", num);
    } else {
        printf("(c) %d is Odd (without using bitwise and modulus operators)\n", num);
    }

    // d) Using conditional operator
    (num % 2 == 0) ? printf("(d) %d is Even (using conditional operator)\n", num) 
                   : printf("(d) %d is Odd (using conditional operator)\n", num);

    return 0;
}