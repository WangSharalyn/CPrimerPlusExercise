// Write a function that returns the difference between the largest and smallest elements
// of an array-of- double . Test the function in a simple program. 
#include <stdio.h>
#define SIZE 5
double diff_max_min(double * ar, int n);
int main(void)
{
    double arr[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
    printf("The different of max and min is %.1f\n", diff_max_min(arr, SIZE));

    return 0;
}
double diff_max_min(double * ar, int n)
{
    int i;
    double max, min, diff;
    max = min = ar[0];
    
    for ( i = 1; i < n; i++)
    {
        if(max < ar[i])
            max = ar[i];
        if(min > ar[i])
            min = ar[i];
    }
    diff = max - min;

    return diff;
}