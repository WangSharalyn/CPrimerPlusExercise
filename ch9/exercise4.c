// The harmonic mean of two numbers is obtained by taking the inverses of the two numbers,
// averaging them, and taking the inverse of the result. Write a function that takes two
// double arguments and returns the harmonic mean of the two numbers. 
#include <stdio.h>
double harmo(double, double);
int main(void)
{
    double x, y;
    printf("Enter two double values: ");
    scanf("%lf%lf", &x, &y);

    printf("The harmonic mean of x and y is %.2lf.\n", harmo(x, y));
    
    return 0;
}
double harmo(double a, double b)
{
    return (1/(((1/a)+(1/b))/2));
}