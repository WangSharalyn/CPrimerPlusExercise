// Devise a function called min(x,y) that returns the smaller of two double values. Test the function with a simple driver. 
#include <stdio.h>
double min(double x, double y);
int main(void)
{
    double a, b;
    printf("Enter two double values: ");
    scanf("%lf%lf", &a, &b);

    printf("The samller of two double values is %.3lf.\n", min(a, b));

    return 0;
}

double min(double x, double y)
{
    double mini;
    if (x <= y)
        mini = x;
    else
        mini = y;    
    
    return mini;
}