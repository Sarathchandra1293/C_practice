#include<stdio.h>

int main(){
    int year;
    scanf("%d", &year);

    if(year % 4 == 0)
        printf("leap year");
    else
        printf("Non-leap year");
return 0;
}