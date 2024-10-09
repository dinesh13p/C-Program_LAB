#include<stdio.h>
#include<math.h>  // For the pow() function

int main() {
    int P;  // Principal amount
    printf("Enter a principal amount: ");
    scanf("%d", &P);

    int t;  // Time in years
    printf("Enter time in years: ");
    scanf("%d", &t);

    float r;  // Interest rate
    printf("Enter the interest rate (as a percentage): ");
    scanf("%f", &r);

    int n;  // Number of times interest is compounded per year
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    // Calculate Simple Interest
    float SI = (P * t * r) / 100;
    printf("The Simple Interest is: %.2f\n", SI);

    // Calculate Compound Interest
    float rate = r / 100;  // Convert percentage to decimal
    float A = P * pow((1 + rate / n), n * t);  // Final amount after compounding
    float CI = A - P;  // Compound Interest
    printf("The Compound Interest is: %.2f\n", CI);

    return 0;
}
