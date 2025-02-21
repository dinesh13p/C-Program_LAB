//Write a program to enter to Cartesian coordinate points and display the distance between them.

#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distance;

    // Input coordinates of the first point
    printf("Enter coordinates of the first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    // Input coordinates of the second point
    printf("Enter coordinates of the second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    // Calculate distance
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    // Display the distance
    printf("Distance between the points: %.2f\n", distance);

    return 0;
}