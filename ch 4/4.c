#include <stdio.h>

int main(){
    float a,b,c;
    printf("Enter the sides of triangle: ");
    scanf("%f %f %f",&a,&b,&c);
    if((a+b>c)&&(b+c>a)&&(a+c>b)){
        printf("valid triangle");
    }
    else{
        printf("not a valid triangle");
    }
    return 0;
}