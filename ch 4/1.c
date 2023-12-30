#include <stdio.h>

int main(){
    int year;
    scanf("%d",&year);
    if(year%100 == 0 && year%400 == 0 || year%100 != 0 && year%4 == 0){
        printf("leap year : %d",year);
    }
    else{
        printf("not a leap year");
    }
    return 0;
}