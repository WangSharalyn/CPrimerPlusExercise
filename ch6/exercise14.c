// Write a program that creats two eight-element arrays of doubles and uses
// a loop to let the user enter values for the eight elements of the first 
// array. Have the program set the elements of the second array to the
// cumulative totals of the elements of the first array.
#include <stdio.h>
int main(void)
{
    double array1[8], array2[8];

    double sum = 0;
    for (int i = 0; i < 8; i++)
    {
        printf("Enter values: ");
        scanf("%lf", &array1[i]);
        sum += array1[i];
        array2[i] = sum;
    }

    for (int i = 0; i < 8; i++)
    {
        printf("%5.2lf ", array1[i]);
    }
    printf("\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%5.2lf ", array2[i]);
    }
    
    return 0;
}
