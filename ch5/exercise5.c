// Change the program addemup.c, which found the sum of the 
// first 20 integers. (If you perfer, you can think of addemup.c
// as a program that calculates how much money you get in 20 days if 
// you receive $1 the first day, $2 the second day, $3 the 
// third day, and so on.) Modify the program so that you can tell 
// it interactively how faw the calculation should proceed. That is,
// replace the 20 with a variable that is read in.
#include <stdio.h>
int main(void)
{
    int count, sum, day;

    printf("Please enter the days: ");
    scanf("%d", &day);

    count = 0;
    sum = 0;

    while (count++ < day)
        sum = sum + count;
    printf("sum = %d\n", sum);
    

    return 0;
}
