// Write a C program to prompt the user to input 3 integer values and print these values in forward and reversed order.

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three value: ");
    scanf("%d %d %d", &a, &b, &c);
    
    printf("Fordward order: %d %d %d\n", a,b,c);

    printf("Reverse order: %d %d %d", c,b,a);

    return 0;
}