//Write a program to add two numbers (5&7) and display its sum.

#include <stdio.h>
int main()
{
    int a, b, sum;

    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);

    sum = a + b;

    printf("Sum of %d and %d is %d\n", a, b, sum);

    return 0;
}