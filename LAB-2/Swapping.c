// Write a program to swap two variables values with and without using third variables.

#include<stdio.h>

int main(){
    int a, b, temp;

    printf("Enter the value of a and b : ");
    scanf("%d %d", &a, &b);

    // swaping two variables using third variables
    temp = a;
    a = b;
    b =temp;
    printf("After swiping: %d %d \n", a, b);


    // swaping two variables without thrid variables
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swiping: %d %d \n", a, b);

    return 0;
}