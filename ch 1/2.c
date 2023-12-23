#include <stdio.h>
int main(){
    int basicsal, hra, allowance, gross;
    printf("enter the value of basic salary : \n");
    scanf("%d",&basicsal);
    hra = (40) * (basicsal) / 100 ;
    allowance = (20) * (basicsal) /100;
    gross = basicsal + hra + allowance;
    printf("gross salary of ramesh : %d\n", gross);

    return 0;
}