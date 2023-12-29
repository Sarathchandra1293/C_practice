#include <stdio.h>

int main() {
    int qty,dis=0;
    float tot,rate;
    scanf("%d%f",&qty,&rate);

    if(qty > 1000) {
        dis = 10;
    }

    tot = rate * qty - (rate * qty * dis / 1000 );

    printf("toatl expenses: %0.2f",tot );
    return 0;
}