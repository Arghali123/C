//5. Program to calculate the area of an ellipse (minor = 4 cm, major = 6 cm)
#include <stdio.h>
#define PI 3.14159

int main() {
    int minor = 4, major = 6;
    double area = PI * minor * major;
    printf("The area of the ellipse with axes %d and %d is %.2f\n", minor, major, area);
    return 0;
}
