/*
Programming
rogramming
ogramming
gramming
ramming
amming
mming
ming
ing
ng
g
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Programming";
    int len = strlen(str);

    // Loop to print the string, starting from each character
    for (int i = 0; i < len; i++) {
        printf("%s\n", str + i);
    }

    return 0;
}