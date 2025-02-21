/*Write a program to declare two integer and one float variables then initialize them to 10,
 15, and 12.6. Also print the variable values in the screen.*/

#include <stdio.h>

int main()
{

    int num1 = 10;
    int num2 = 15;
    float num3 = 12.6;

    printf("The value of num1 is: %d\n", num1);
    printf("The value of num2 is: %d\n", num2);
    printf("The value of num3 is: %.1f\n", num3);

    return 0;
}
