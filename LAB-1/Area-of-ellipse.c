//Write a program to calculate area of an ellipse having its axes (minor=4cm, major=6cm). Area = pie*a*b

#include<stdio.h>
#include<math.h>
#define pie 3.1415
int main()
{
    int a = 4; //major
    int b = 6; //minor
    float Area;
    Area = pie * a * b;
    printf("The area of ellipse is: %.2f\n", Area);
    return 0;
}