#include <stdio.h>
#include <stdlib.h> 

int main () {
    int x, y;
    scanf("%d", &x);
    y = abs(x); 
    printf("The absolute value of %d is %d", x, y);

    return 0;
}