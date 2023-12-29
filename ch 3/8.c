#include <stdio.h>

int main() {
    int num, rev = 0, rem, temp;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    printf("Reversed : %d\n", rev);

    if (num == rev) {
        printf(" equal.\n");
    } else {
        printf(" not equal.\n");
    }

    return 0;
}