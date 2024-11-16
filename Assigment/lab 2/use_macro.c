/*
Write a C program to convert a given temperature from Celsius to Fahrenheit and Kelvin. The program should:

Define symbolic constants for the conversion factors.
Declare and initialize a variable for the temperature in Celsius.
Calculate and print the temperature in Fahrenheit and Kelvin using macros (preprocessor directives)
#define CELSIUS_TO_FAHRENHEIT(c) ((c) * 9.0 / 5.0 + 32)  // Conversion macro
#define CELSIUS_TO_KELVIN(c) ((c) + 273.15)  // Conversion macro
*/
#include <stdio.h>

// Define macros for conversion
#define CELSIUS_TO_FAHRENHEIT(c) ((c) * 9.0 / 5.0 + 32)  // Celsius to Fahrenheit
#define CELSIUS_TO_KELVIN(c) ((c) + 273.15)  // Celsius to Kelvin

int main() {
    float celsius, fahrenheit, kelvin;

    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Calculate Fahrenheit and Kelvin using macros
    fahrenheit = CELSIUS_TO_FAHRENHEIT(celsius);
    kelvin = CELSIUS_TO_KELVIN(celsius);

    // Output the results
    printf("%.2f Celsius is %.2f Fahrenheit.\n", celsius, fahrenheit);
    printf("%.2f Celsius is %.2f Kelvin.\n", celsius, kelvin);

    return 0;
}
