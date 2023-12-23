#include <stdio.h>
int main() {
    float c,f;
    printf("enter the value of fahrenheit : ");
    scanf("%f",&f);
    c = 5 * (f - 32) / 9;

    printf("temp in centigrade : %0.2f\n",c);
}