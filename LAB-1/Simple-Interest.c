//Write a program to calculate simple interest for a given P=4000, T=2, R=5.5. (SI =P*T*R/100)

#include<stdio.h>
int main()
{
    int P = 4000;
    int T = 2;
    float R = 5.5;
    float SI;

    SI = P * T * R / 100;
    printf("The simple interest is: %.2f\n", SI);

    return 0;
}