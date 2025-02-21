/*
 1  0   1   0   1
    0   1   0   1
        1   0   1
            0   1
                1*/

#include <stdio.h>

int main()
{
    int n = 5; // Number of rows

    for (int i = 0; i < n; i++)
    {
        // Print leading spaces
        for (int j = 0; j < 2 * i; j++)
        {
            printf(" ");
        }

        // Print alternating 1s and 0s
        for (int j = 0; j < n - i; j++)
        {
            printf("%d ", (i + j) % 2);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}