#include <stdio.h>
int main() {
    float l,b,r,R_area,perimeter,C_area,circumference;
    printf("enter the values of l and b : ");
    scanf("%f",&l);
    scanf("%f",&b);
    printf("enter the values of  r : ");
    scanf("%f",&r);

    R_area = l * b;
    perimeter = 2 * (l + b);
    C_area = 3.14 * r * r;
    circumference = 2 * 3.14 * r ;

    printf("area of rectangle : %0.2f\n",R_area);
    printf("area of circle : %0.2f\n",C_area);
    printf("perimeter] of rectangle : %0.2f\n",perimeter);
    printf("circumference of circle : %0.2f\n",circumference);

    return 0;
}