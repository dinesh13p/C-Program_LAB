// Write a program to print the size of char, float, double and long double data types in C.

#include <stdio.h>

int main() {
    printf("Size of char: %lu byte(s)\n", sizeof(char));
    printf("Size of float: %lu byte(s)\n", sizeof(float));
    printf("Size of double: %lu byte(s)\n", sizeof(double));
    printf("Size of long double: %lu byte(s)\n", sizeof(long double));

    return 0;
}