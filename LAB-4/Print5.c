/*
1   6   10  13  15
2   7   11  14
3   8   12 
4   9
5
*/

#include <stdio.h>

int main() {
    int i, j, num;

    // Loop for each row
    for (i = 1; i <= 5; i++) {
        num = i;
        
        // Loop to print the numbers in each row
        for (j = 1; j <= 6 - i; j++) {
            printf("%d\t", num);
            num += 5; // Increase by 5 for the next number in the row
        }
        // Move to the next line after each row
        printf("\n");
    }