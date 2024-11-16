//Write a function which accepts structure as argument and returns structure to the calling program.
#include <stdio.h>

struct Rectangle {
    float length;
    float width;
};

struct Rectangle modifyRectangle(struct Rectangle rect, float increaseBy) {
    rect.length += increaseBy;
    rect.width += increaseBy;
    return rect;
}

int main() {
    struct Rectangle myRect, modifiedRect;

    printf("Enter the length and width of the rectangle: ");
    scanf("%f %f", &myRect.length, &myRect.width);

    float increaseBy;
    printf("Enter the value to increase length and width by: ");
    scanf("%f", &increaseBy);

    modifiedRect = modifyRectangle(myRect, increaseBy);

    printf("\nOriginal Rectangle - Length: %.2f, Width: %.2f\n", myRect.length, myRect.width);
    printf("Modified Rectangle - Length: %.2f, Width: %.2f\n", modifiedRect.length, modifiedRect.width);

    return 0;
}
