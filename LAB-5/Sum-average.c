//Write a program to initialize one dimensional array of size 8 and display the sum and average of array elements


#include <stdio.h>

int main() {
    int numbers[8] = {10, 20, 30, 40, 50, 60, 70, 80}; // Initialize array
    int sum = 0;
    float average;

    // Calculate the sum of the array elements
    for (int i = 0; i < 8; i++) {
        sum += numbers[i];
    }

    // Calculate the average
    average = sum / 8.0; // Use 8.0 to ensure floating-point division

    // Display the results
    printf("Sum of array elements: %d\n", sum);
    printf("Average of array elements: %.2f\n", average);

    return 0;
}