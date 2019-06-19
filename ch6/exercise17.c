// Chuckie Lucky won a million dollars(after taxes), which he places in
// in an account that earns 8% a year. On the last day of each year, Chuckie 
// withdraws $100,000. Write a program that finds out how many years it
// takes for Chuckie to empty his account.
#include <stdio.h>
int main(void)
{
    float sum = 100;
    for (int i = 1; sum > 0; i++)
    {
        sum *= 1.08;
        sum -= 10;
    }
    printf("After %d years, it takes for Chuckie to empty his account.");
    // After 10622144 years, it takes for Chuckie to empty his account.
    
    return 0;
}
