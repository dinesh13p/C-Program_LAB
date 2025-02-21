//Write a program to enter 1o floating points nummber into an array and find the largest and smallest elements.

#include <stdio.h>
int main() {
    float numbers[10];
    float largest, smallest;

    // Input 10 floating-point numbers
    printf("Enter 10 floating-point numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &numbers[i]);
    }

    // Initialize largest and smallest with the first element
    largest = smallest = numbers[0];

    // Find the largest and smallest numbers
    for (int i = 1; i < 10; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    // Display the results
    printf("\nThe largest number is: %.2f\n", largest);
    printf("The smallest number is: %.2f\n", smallest);

    return 0;
}