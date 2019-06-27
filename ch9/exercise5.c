// Write and test a function called larger_of() that replaces the contents of two double
// variables with the maximum of the two values. For example, larger_of(x,y) would reset both x and y to the larger of the two.
#include <stdio.h>
void larger_of(double * x, double * y);
int main(void)
{
    double a, b;
    printf("Enter two double values: ");
    scanf("%lf%lf", &a, &b);
    larger_of(&a, &b);
    printf("larger_of(x, y) are %.2lf and %.2lf.\n", a, b);
    
    return 0;
}
void larger_of(double * x, double * y)
{
    if (*x >= *y)
        *y = *x;
    else
        *x = *y;    
}