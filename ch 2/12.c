#include <stdio.h>
#include <math.h>
int main( ) {
    int num;
    scanf("%d",&num);
    int i = 0;
    while(num >= 100){
        num = num - 100;
        i++;
    }
    while(num >= 50){
        num = num - 50;
        i++;
    }
    while(num >= 5){
        num = num - 5;
        i++;
    }
    while(num >= 2){
        num = num - 2;
        i++;
    }
    while(num >= 1){
        num = num - 1;
        i++;
    }
    printf("%d",i);

return 0;
}