//Write a program to swap value of two variables using pointer.

#include <stdio.h>

int main() {
    int a, b, temp;
    int *p1 = &a, *p2 = &b;

    // Input values for a and b
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    // Swap the values using pointers
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    // Display the swapped values
    printf("After swapping:\n");
    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);

    return 0;
}