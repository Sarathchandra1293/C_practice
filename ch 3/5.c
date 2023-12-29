#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if (num % 2 == 0){
        printf(" num is even : %d",num);
    }
    else{
        printf(" num is odd : %d",num);
    }
return 0;
}