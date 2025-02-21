//Write a program to input two integer numbers and display the sum of even numbers between these two input numbers.

#include <stdio.h>

int main() {
    int num1, num2, sum = 0;

    // Input two integer numbers from the user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Ensure num1 is the smaller number
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Calculate the sum of even numbers between num1 and num2
    for (int i = num1; i <= num2; i++) {
        if (i % 2 == 0) {  // Check if the number is even
            sum += i;      // Add to sum if it's even
        }
    }

    // Display the result
    printf("The sum of even numbers between %d and %d is: %d\n", num1, num2, sum);

    return 0;
}