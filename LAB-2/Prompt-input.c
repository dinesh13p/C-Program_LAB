//Write a C program to prompt the user to input 3 integer values and print these values in forward and reversed order.

#include<stdio.h>
int main()
{
    int num1, num2, num3;

    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("The values in forward order is : %d\t %d\t %d\t\n", num1, num2, num3);
    printf("The values in reversed order is : %d\t %d\t %d\t", num3, num2, num1);

    return 0;
}