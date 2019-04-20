#include <stdio.h>
#define GALON_TO_LITER 3.785
#define MILE_TO_KILO 1.609
int main(void){
    float distance, galon;

    printf("Please enter the number of miles traveled and the number \
of gasoline consumed!\n");
    scanf("%f %f", &distance, &galon);
    printf("MPG: %.1f\n", distance/galon);
    printf("Liter-per-100-km: %.1f", distance * GALON_TO_LITER/(galon * MILE_TO_KILO) * 100);

    return 0;
}