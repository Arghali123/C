//Program to convert celcius to fahrenheit and kelvin.
#include<stdio.h>
#define CELCIUS_TO_KELVIN(c) (((c)*9.0/5.0)+32)
#define CELCIUS_TO_FAHRENHEIT(c) ((c)+273.15)
int main()
{
    float celcius,kelvin,fahrenheit;
    printf("Enter the temperature in celcius: ");
    scanf("%f",&celcius);
    kelvin=CELCIUS_TO_KELVIN(celcius);
    fahrenheit=CELCIUS_TO_FAHRENHEIT(celcius);
    printf("%.2f celcius is equal to %.2f kelvin",kelvin);
    printf("%.2f celcius is equal to %.2f fahrenheit",fahrenheit);
    return 0;
}