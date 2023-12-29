#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;

    printf("Enter the length and breadth of the rectangle : ");
    scanf("%f %f", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    if (area > perimeter) {
        printf("area of the rectangle is greater than its perimeter.\n");
    } else {
        printf("area of the rectangle is not greater than its perimeter.\n");
    }

    return 0;
}