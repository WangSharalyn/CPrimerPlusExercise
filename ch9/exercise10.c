#include <stdio.h>
void to_base_n(unsigned long n, int p);
int main(void)
{
    unsigned long number;
    int base;
    printf("Enter an integer and an base (q to quit): \n");
    while (scanf("%lu%d", &number, &base) == 2)
    {
        printf("Base-%d equivalent: ", base);
        to_base_n(number, base);
        putchar('\n');
        printf("Enter an integer and base (q to quit): \n");
    }
    printf("Done.\n");

    return 0;
}
void to_base_n(unsigned long n, int p)
{
    int r;
    r = n % p;
    if (n >= p)
        to_base_n(n / p, p);
    printf("%d", r);
    
    return;
}