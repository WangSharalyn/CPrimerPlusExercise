// Write a program that reads eight integers into an array and then 
// prints them in reverse order.
#include <stdio.h>
int main(void)
{
    int array[8];
    for (int i = 0; i < 8; i++)
    {
        printf("Enter a integer: ");
        scanf("%d", &array[i]);
    }
    for (int i = 7; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
        
    return 0;
}
