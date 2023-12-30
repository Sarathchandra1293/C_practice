# include <stdio.h>
int main( ){
    int i = 10,j = 12,temp;

    if ( j >= i ){
        {
            temp = j;
            j = i;
            i = temp;
        }

    }
    printf("%d\n%d\n",i,j);
return 0 ;
}