// Print the value of y for given x=2 & z=4 and analyze the output.

// y = x++ + ++x;
// y= ++x + ++x;
// y= ++x + ++x + ++x;
// y = x>z;
// y= x>z? x:z;
// y = x&z;
// y= x>>2 + z<<1;


#include <stdio.h>
int main() {
    int x = 2, z = 4, y;

    // First expression: y = x++ + ++x;
    x = 2; // Resetting x
    y = x++ + ++x;
    printf("y = x++ + ++x; (x = 2, z = 4) => y = %d, x = %d\n", y, x);

    // Second expression: y = ++x + ++x;
    x = 2; // Resetting x
    y = ++x + ++x;
    printf("y = ++x + ++x; (x = 2, z = 4) => y = %d, x = %d\n", y, x);

    // Third expression: y = ++x + ++x + ++x;
    x = 2; // Resetting x
    y = ++x + ++x + ++x;
    printf("y = ++x + ++x + ++x; (x = 2, z = 4) => y = %d, x = %d\n", y, x);

    // Fourth expression: y = x > z;
    x = 2, z = 4; // Resetting x and z
    y = x > z;
    printf("y = x > z; (x = 2, z = 4) => y = %d\n", y);

    // Fifth expression: y = x > z ? x : z;
    x = 2, z = 4; // Resetting x and z
    y = x > z ? x : z;
    printf("y = x > z ? x : z; (x = 2, z = 4) => y = %d\n", y);

    // Sixth expression: y = x & z;
    x = 2, z = 4; // Resetting x and z
    y = x & z;
    printf("y = x & z; (x = 2, z = 4) => y = %d\n", y);

    // Seventh expression: y = x >> 2 + z << 1;
    x = 2, z = 4; // Resetting x and z
    y = (x >> 2) + (z << 1);
    printf("y = x >> 2 + z << 1; (x = 2, z = 4) => y = %d\n", y);

    return 0;
}