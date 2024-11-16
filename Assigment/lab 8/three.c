//Write a program to enter to Cartesian coordinate points and display the distance between them.
#include <stdio.h>
#include <math.h>

struct Point {
    float x;
    float y;
};

float calculateDistance(struct Point p1, struct Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    struct Point point1, point2;
    float distance;

    printf("Enter x and y coordinates of the first point: ");
    scanf("%f %f", &point1.x, &point1.y);
    printf("Enter x and y coordinates of the second point: ");
    scanf("%f %f", &point2.x, &point2.y);

    distance = calculateDistance(point1, point2);
    printf("The distance between the two points is: %.2f\n", distance);

    return 0;
}
