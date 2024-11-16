//4. Program to calculate the area of a circle (radius =5)
#include <stdio.h>
#define PI 3.14159

int main() {
    int r = 5;
    double area = PI * r * r;
    printf("The area of the circle with radius %d is %.2f\n", r, area);
    return 0;
}

