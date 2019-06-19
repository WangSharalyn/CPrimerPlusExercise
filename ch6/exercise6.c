// Write a program that prints a table with each line giving an integer, 
// its square, and its cube. Ask the user to input the lower and upper
// limits for the table. Use a for loop.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int lower, upper;
    printf("Enter the lower and upper: ");
    scanf("%d%d", &lower, &upper);
    printf("number  square  cube\n");

    for(int i = lower; i <= upper; i++)
    {
        printf("  %d     %3d     %3d\n", i, i*i, i*i*i);
    }
    return 0;
}
