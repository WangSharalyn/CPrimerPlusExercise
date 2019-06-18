// Write a program that asks the user to enter the number of days and 
// then converts that value to weeks and days. For example, it would
// convert 18 days to 2 weeks, 4 days. Display results in the following 
// format:18 days are 2 weeks, 4 days. Use a while loop to allow the 
// user to repeatedly enter day values; terminate the loop when the 
// user enters a nonposotive value, such as 0 or -20.
#include <stdio.h>
int main(void)
{
    const int D_PER_WEEK = 7;
    int days, weeks, left;
    printf("Please enter the days(>=0):\n");
    scanf("%d", &days);

    while (days > 0)
    {
        weeks = days/D_PER_WEEK;
        left = days % D_PER_WEEK;
        printf("%d days are %d weeks, %d days.\n", days, weeks, left);
        printf("Please enter next value(<=0 to quit):\n");
        scanf("%d", &days);
    }
    printf("Done!\n");    
    
    return 0;
}
