//Write a program to calculate simple and compound interest.

#include<stdio.h>
int main()
{
    int P;
    printf("Enter a principle amount: ");
    scanf("%d", &P);
    int t;
    printf("Enter time in years: ");
    scanf("%d", &t);
    float r = 5.5;
    printf("Enter the interest rate: ");
    scanf("%f", &r);
    int n;
    printf("Enter the number of times interest applied: ");
    scanf("%d", &n);
    float SI;
    float CI;

    SI = P * t * r / 100;
    printf("The simple interest is: %.2f\n", SI);

    return 0;
}