// WAP to calculate the sum of the series p+p^2+p^3+p^4+....+p^n, where p is the base and n is the number of terms

#include <stdio.h>
#include <math.h>

int main() {
    int p, n;
    double sum = 0.0;

    // Input the base (p) and the number of terms (n)
    printf("Enter the base (p): ");
    scanf("%d", &p);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for (int i = 1; i <= n; i++) {
        sum += pow(p, i);
    }

    // Display the result
    printf("The sum of the series is: %.2lf\n", sum);

    return 0;
}