//Write a program to find the sum of all the elements of an array using pointers.

#include <stdio.h>

int main() {
    int arr[100], size, sum = 0;
    int *ptr;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize pointer to the start of the array
    ptr = arr;

    // Calculate the sum using pointer
    for (int i = 0; i < size; i++) {
        sum += *ptr;
        ptr++;  // Move pointer to the next element
    }

    // Display the sum of all elements
    printf("The sum of all elements is: %d\n", sum);

    return 0;
}