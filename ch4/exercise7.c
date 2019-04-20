#include <stdio.h>
#include <float.h>
int main(void){
    double a = 1.0/3.0;
    float b = 1.0/3.0;

    // show four digits to the right of the decimal
    printf("%.6f %.6f\n", a, b);
    // show 12 digits to the right of the decimal
    printf("%.12f %.12f\n", a, b);
    // show 16 digits to the right of the decimal
    printf("%.16f %.16f\n", a, b);
    // display the values of FLT_DIG and DBL_DIG
    printf("%d %d\n", FLT_DIG, DBL_DIG);

    return 0;
}