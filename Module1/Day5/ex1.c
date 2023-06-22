#include <stdio.h>
struct Box 
{
    double length;
    double width;
    double height;
};
double calculateVolume(struct Box* boxPtr)
{
    return boxPtr->length * boxPtr->width * boxPtr->height;
}
double calculateSurfaceArea(struct Box* boxPtr) 
{
    return 2 * (boxPtr->length * boxPtr->width +
                boxPtr->width * boxPtr->height +
                boxPtr->height * boxPtr->length);
}

int main() 
{
    struct Box myBox;
    struct Box* boxPtr = &myBox;
    printf("Enter the length of the box: ");
    scanf("%lf", &boxPtr->length);
    printf("Enter the width of the box: ");
    scanf("%lf", &boxPtr->width);
    printf("Enter the height of the box: ");
    scanf("%lf", &boxPtr->height);
    double volume = calculateVolume(boxPtr);
    printf("Volume: %.2f\n", volume);
    double surfaceArea = calculateSurfaceArea(boxPtr);
    printf("Surface Area: %.2f\n", surfaceArea);
    return 0;
}
