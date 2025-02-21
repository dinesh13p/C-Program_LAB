// Write a C program to calculate following expression: 5x √(y^2 +5)

#include <stdio.h>
#include <math.h>

int main() {
    double x, y, result;

    // Input values for x and y
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the value of y: ");
    scanf("%lf", &y);

    // Calculate the expression 5x * sqrt(y^2 + 5)
    result = 5 * x * sqrt((y * y) + 5);

    // Display the result
    printf("The result of the expression 5x * sqrt(y^2 + 5) is: %.2lf\n", result);

    return 0;
}