// Write a program that requests lower and upper integer limits, calculates the
// sum of all the integer squares from the square of the lower limit to the 
// square of the upper limit, and displays the answer. The program should then
// contimue to prompt for limits and display answers until the user enters an upper
// limit that is equal to or less than the lower limit.
#include <stdio.h>
int main(void)
{
    int lower, upper;
    printf("Enter lower and upper integer limits: ");
    scanf("%d%d", &lower, &upper);
    while (lower < upper)
    {
        int sum = 0;
        for (int i = lower; i <= upper; i++)
        {
            sum += i * i;
        }
        
        printf("The sums of the squares from %d to %d is %d\n", lower * lower, upper * upper, sum);
        printf("Enter next set of limits: ");
        scanf("%d%d", &lower, &upper);
    }
    printf("Done\n");
    
    return 0;
}
