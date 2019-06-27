// Write and test a function that takes the addresses of three double variables as
// arguments and that moves the value of the smallest variable into the first variable,
// the middle value to the second variable, and the largest value into the third variable. 
#include <stdio.h>
void sort_num(double * x, double * y, double * z);
int main(void)
{
    double a, b, c;
    printf("Enter three double values: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    sort_num(&a, &b, &c);
    printf("The sort are %.2lf, %.2lf and %.2lf.\n", a, b, c);
    
    return 0;
}
void sort_num(double * x, double * y, double * z)
{
    double temp;

    if (*x >= *y)
    {
        temp = *x;
        *x = *y;
        *y = temp;
    }
    if(*x > *z)
    {
        temp = *x;
        *x = *z;
        *z = temp;
    }
    if (*y >= *z)
    {
        temp = *y;
        *y = *z;
        *z = temp;
    }   
}