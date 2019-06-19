// Write a program that creats an eight-element array of ints and sets the
// elements to the first eight powers of 2 and then prints the values. Use
// a for loop to set the values, and for variety, use a do while loop
// to display the values.
#include <stdio.h>
int main(void)
{
    int array[8];
    int sum = 1, i;
    for (i = 0; i < 8; i++)
    {
        sum *= 2;
        array[i] = sum;
    }
    
    i = 0;
    do
    {
        printf("%d\n", array[i]);
        i++;
    } while (i < 8);
    
    return 0;
}
