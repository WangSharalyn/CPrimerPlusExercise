// Now modify the program of Programming Exercise 5 so that it computes 
// the sum of the squares of the integers.
#include <stdio.h>
int main(void)
{
    int count, sum, day;

    printf("Enter the days: ");
    scanf("%d", &day);

    count = 0;
    sum = 0;

    while (count++ < day)
        sum = sum + count * count;
    printf("sum = %d\n", sum);
    
    return 0;
}
