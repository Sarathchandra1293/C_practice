#include <stdio.h>
int main() {
    float dist,dist_mt,dist_ft,dist_cm;
    printf("enter the distance btw two cities in km : ");
    scanf("%f",&dist);
    printf("distance in km %f",dist);
    dist_mt = dist * 1000;
    dist_cm = dist * 1000 * 100;
    dist_ft = dist * 3280.84;

    printf("distance in meters : %f\n",dist_mt);
    printf("distance in centimeters : %f\n",dist_cm);
    printf("distance in feet : %f\n",dist_ft);

    return 0;
}