#include <stdio.h>
int main() {
    int hardness,carbon,tensile;
    scanf("%d%d%d",&hardness,&carbon,&tensile);

    if(hardness > 50 && carbon < 0.7 && tensile > 5600){
        printf("grade 10");
    }
    else if(hardness > 50 && carbon < 0.7 && tensile < 5600){
        printf("grade 9");
    }
    else if(hardness < 50 && carbon < 0.7 && tensile > 5600){
        printf("grade 8");
    }
    else if(hardness > 50 && carbon > 0.7 && tensile > 5600){
        printf("grade 7");
    }
    else if((hardness > 50 && carbon > 0.7 && tensile < 5600) || (hardness < 50 && carbon < 0.7 && tensile < 5600) || (hardness < 50 && carbon > 0.7 && tensile > 5600)){
        printf("grade 6");
    }
    else {
        printf("grade 5");
    }
    
    return 0;
}