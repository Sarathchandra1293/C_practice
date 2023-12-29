#include <stdio.h>
int main() {
    float cp,sp;
    scanf("%f",&cp);
    scanf("%f",&sp);
    float diff = sp - cp;
    if(diff > 0 ) {
        printf ("profit of customer : %0.2f",diff);
    }
    else if (diff < 0) {
        printf ("loss of customer : %0.2f", -(diff));
    }
    else {
        printf ("no loss, no profit : %0.2f",diff);
    }
return 0;
}