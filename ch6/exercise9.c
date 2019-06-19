// Modify exercise 8 so that it uses a function to return the value of the calculation.
#include <stdio.h>
float result(float a, float b);
int main(void)
{
    float a, b;
    int i;

    printf("Enter two floating-point numbers: ");
    i = scanf("%f%f", &a, &b);

    while (i == 2)
    {
        printf("The value of their difference divided by their product: %f\n", result(a, b));
        printf("Enter next two floating-point numbers: ");
        i = scanf("%f%f", &a, &b);
    }
    printf("Done!\n");
    
    return 0;
}

float result(float a, float b){
    float res = (a - b) / (a * b);
    return res;
}