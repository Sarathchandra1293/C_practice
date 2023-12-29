#include <stdio.h>

int main() {
    int x, y;

    printf("Enter the coordinates: ");
    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0) {
        printf("The point is on origin\n");
    } else if (x == 0) {
        printf("The point is on Y-axis\n");
    } else if (y == 0) {
        printf("The point is on X-axis\n");
    } else {
        printf("The point is neither on X-axis nor Y-axis\n");
    }

    return 0;
}