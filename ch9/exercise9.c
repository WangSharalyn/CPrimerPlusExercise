#include <stdio.h>
double poewer(double n, int p);
int main(void)
{
    double x, xpow;
    int exp;

    printf("Enter a number and the integer power:");
    printf(" to which\nthe number will be raised. Enter q");
    printf(" to quit.\n");
    while (scanf("%lf%d", &x, &exp) == 2)
    {
        xpow = poewer(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip -- bye !\n");
    
    return 0;
}
double poewer(double n, int p)
{
    double pow = 1;

    if (n == 0)
    {
        pow = 0;
    }
    if (p > 0)
    {
        pow = n * poewer(n, p-1);
    }else if(p < 0)
    {
        pow = 1/n * poewer(n, p+1);
    }else
    {
        pow = 1;
    }
    
    return pow;   
}