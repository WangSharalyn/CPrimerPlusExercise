// Write and test a Fibonacci() function that uses a loop instead of recursion to calculate Fibonacci numbers.
#include <stdio.h>
unsigned long Fibonacci(unsigned n);
int main(void)
{
    unsigned n;
    printf("Enter an integer: ");
    scanf("%u", &n);
    printf("Fibonacci(%u) is %lu.\n", n, Fibonacci(n));

    return 0;
}
unsigned long Fibonacci(unsigned n)
{
    unsigned long f1, f2, last;
    f1 = f2 = last = 1;
    if(n > 2)
    {
        for (int i = 3; i <= n; i++)
        {
            last = f1 + f2;
            f1 = f2;
            f2 = last;
        }   
    }

    return last;
}