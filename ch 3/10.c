#include <stdio.h>

int main() {
    int angle1, angle2, angle3;
    scanf("%d %d %d", &angle1, &angle2, &angle3);
    if (angle1 + angle2 + angle3 == 180) {
        printf(" valid triangle.\n");
    } else {
        printf("not a valid triangle.\n");
    }

    return 0;
}