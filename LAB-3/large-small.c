 //Write a program to find the largest and smallest among three entered numbers and also display whether the identified largest/smallest number is even or odd.

 #include <stdio.h>
 int main() {
     int num1, num2, num3;
     int largest, smallest;
 
     printf("Enter three numbers: ");
     scanf("%d %d %d", &num1, &num2, &num3);
 
     // Finding the largest number
     if (num1 >= num2 && num1 >= num3) {
         largest = num1;
     } else if (num2 >= num1 && num2 >= num3) {
         largest = num2;
     } else {
         largest = num3;
     }
 
     // Finding the smallest number
     if (num1 <= num2 && num1 <= num3) {
         smallest = num1;
     } else if (num2 <= num1 && num2 <= num3) {
         smallest = num2;
     } else {
         smallest = num3;
     }
 
 
     // Displaying the largest and smallest numbers
     printf("Largest number: %d\n", num1);
     printf("Smallest number: %d\n", num1);
 
     // Check if the largest number is even or odd
     if (largest % 2 == 0) {
         printf("The largest number is even.\n");
     } else {
         printf("The largest number is odd.\n");
     }
 
     // Check if the smallest number is even or odd
     if (smallest % 2 == 0) {
         printf("The smallest number is even.\n");
     } else {
         printf("The smallest number is odd.\n");
     }
 
     return 0;
 }