#include <stdio.h>
#include <math.h>
int main( ) {
    float x,y,r,p;
    printf("enter the values of x and y : ");
    scanf("%f",&x);
    scanf("%f",&y);

    r = sqrt(x * x + y * y);
    p = atan(y / x);

    printf ("(r,p) is (%0.2f,%0.2f)",r,p);
return 0 ;
}