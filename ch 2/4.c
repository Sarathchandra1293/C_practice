# include <stdio.h>
int main(){
    int num,i,sum,rem;
    sum = 0;
    scanf("%d",&num);
    while(num != 0){
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    printf("%d",sum);
return 0 ;
}