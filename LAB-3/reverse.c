// Write a program to get input of two or higher digit integer number and display in reverse order.

#include <stdio.h>

int main() {
    int num, reverse = 0, remainder;
    
    printf("Enter a two or more digit integer: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        remainder = num % 10; 
        reverse = reverse * 10 + remainder;  
        num /= 10;                   
    }

    // Display the reversed number
    printf("Reversed number: %d\n", reverse);

    return 0;
}