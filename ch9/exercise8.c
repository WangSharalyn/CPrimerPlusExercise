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
    int i;

    if (n == 0)
    {
        pow = 0;
    }
    if (p >= 0)
    {
        for ( i = 0; i < p; i++)
        {
            pow *= n;
        }
    }else
    {
        for ( i = 0; i > p; i--)
        {
            pow /= n;
        }
    }
    
    return pow;   
}