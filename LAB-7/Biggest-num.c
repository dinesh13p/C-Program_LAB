// Write a program to find biggest among three numbers using pointer.

#include <stdio.h>

int main() {
    int a, b, c;
    int *p1 = &a, *p2 = &b, *p3 = &c;
    int *largest;

    // Input three numbers
    printf("Enter three numbers:\n");
    scanf("%d %d %d", p1, p2, p3);

    // Compare using pointers
    largest = (*p1 > *p2) ? p1 : p2;
    largest = (*largest > *p3) ? largest : p3;

    // Display the largest number
    printf("The largest number is: %d\n", *largest);

    return 0;
}