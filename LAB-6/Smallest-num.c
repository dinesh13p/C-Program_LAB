// Write a program to find smallest number from the array using function.


#include <stdio.h>

// Function to find the smallest number in an array
int findSmallest(int arr[], int size) {
    int smallest = arr[0];  // Initialize smallest with the first element
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}

int main() {
    int arr[10], size;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and display the smallest number
    int smallest = findSmallest(arr, size);
    printf("The smallest number in the array is: %d\n", smallest);

    return 0;
}