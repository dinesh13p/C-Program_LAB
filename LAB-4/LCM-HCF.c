//Write a program to find GCD (greatest common divisor or HCF) and LCM (least common multiple) of two numbers.
#include <stdio.h>

// Function to find the hcf using the Euclidean algorithm
int hcf(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find the LCM
int lcm(int a, int b) {
    return (a * b) / hcf(a, b);
}

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate hcf and LCM
    int hcf_result = hcf(num1, num2);
    int lcm_result = lcm(num1, num2);

    // Display the results
    printf("HCF of %d and %d is: %d\n", num1, num2, hcf_result);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm_result);

    return 0;
}