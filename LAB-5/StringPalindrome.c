// Write a program to read a string and check for palindrome without using string related function (a string is palindrome if its half is mirror by itself eg: abcdcba).


#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    int isPalindrome = 1;

    // Read the string from the user
    printf("Enter a string: ");
    char ch;
    while ((ch = getchar()) != '\n' && length < 99) { // Read until newline or max limit
        str[length++] = ch;
    }
    str[length] = '\0'; // Null-terminate the string

    // Check if the string is a palindrome
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    // Display the result
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}