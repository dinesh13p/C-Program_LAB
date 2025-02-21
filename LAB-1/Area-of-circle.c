//Write a program to calculate area of a circle having its radius (r=5).

#include <stdio.h>
#include<math.h>

int main()
{
    float pie = 22/7;
    int r = 5;
    float Area;
    
    Area = pie * pow(r,2);

    printf("Area of circle is: %.2f\n", Area);

    return 0;
}