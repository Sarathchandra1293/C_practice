#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,s,area;
    printf("enter the values of a b c \n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

    s = (a + b + c) / 2 ;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("area : %0.2f", area);
return 0 ;
}