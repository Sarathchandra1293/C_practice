#include <stdio.h>

int main() {
    float sub1,sub2,sub3,sub4,sub5,total,percent;
    printf("enter the values of subjects : ");
    scanf("%f",&sub1);
    scanf("%f",&sub2);
    scanf("%f",&sub3);
    scanf("%f",&sub4);
    scanf("%f",&sub5);
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    float total_max = 500;
    percent = (total / total_max) * 100;
    printf("total : %0.2f\n",total);
    printf("percent : %0.2f\n",percent);

    return 0;
}