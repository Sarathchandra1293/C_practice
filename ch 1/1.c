#include <stdio.h>
int main(){
    int p, n;
    float r,si;

    printf("enter the value of principle : ");
    scanf("%d",&p);
    printf("enter the value of n : ");
    scanf("%d",&n);
    printf("enter the value of rate : ");
    scanf("%f",&r);

    si = (p * n * r )/100 ;
    printf("%f",si);
    return 0;
}