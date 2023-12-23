#include <stdio.h>
int main() {
    int length,breadth;
    scanf("%d",&length);
    scanf("%d",&breadth);
    printf("%d mm x %d mm\n",length,breadth);
    for(int i=1;i<8;i++){
        int temp = length;
        length = breadth;
        breadth = temp / 2;
        printf("%d mm x %d mm\n",length,breadth);
    }
    return 0;
}