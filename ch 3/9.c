#include <stdio.h>

int main() {
    int ram, shyam, ajay;
    printf("Enter Ram, shyam, Ajay ages : ");
    scanf("%d", &ram);
    scanf("%d", &shyam);
    scanf("%d", &ajay);

    if (ram < shyam && ram < ajay) {
        printf("Ram is youngest: %d.\n", ram);
    } else if (shyam < ram && shyam < ajay) {
        printf("Shyam is youngest: %d.\n", shyam);
    } else {
        printf("Ajay is youngest: %d.\n", ajay);
    }

    return 0;
}