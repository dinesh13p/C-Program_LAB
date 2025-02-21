// Write a C program to convert a given temperature from Celsius to Fahrenheit and Kelvin. The program should:

// i) Define symbolic constants for the conversion factors.
// ii)Declare and initialize a variable for the temperature in Celsius.
// iii) Calculate and print the temperature in Fahrenheit and Kelvin using macros (preprocessor directives)

#include <stdio.h>

// Define symbolic constants for conversion factors
#define FAHRENHEIT_CONVERSION(c) ((c * 9.0 / 5.0) + 32)
#define KELVIN_CONVERSION(c) (c + 273.15)


int main() {
    
    float celsius = 25.0;  

    // Calculate temperatures in Fahrenheit and Kelvin using macros
    float fahrenheit = FAHRENHEIT_CONVERSION(celsius);
    float kelvin = KELVIN_CONVERSION(celsius);

    printf("Temperature in Celsius: %.2f C\n", celsius);
    printf("Temperature in Fahrenheit: %.2f F\n", fahrenheit);
    printf("Temperature in Kelvin: %.2f K\n", kelvin);

    return 0;
}