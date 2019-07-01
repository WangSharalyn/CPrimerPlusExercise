// Write a function that returns the index of the largest value stored in an array-of- double . Test the function in a simple program. 
#include <stdio.h>
#define SIZE 5
int large_index(const double * ar, int n);
int main(void)
{
    double ar[SIZE] = {1.1, 2.2, 5.5, 3.3, 4.4};
    printf("The index of the largest number is %d", large_index(ar, SIZE));

    return 0;
}
int large_index(const double * ar, int n)
{
    int i, index;
    double lar = ar[0];
    index = 0;

    for ( i = 0; i < n; i++)
    {
        if(lar < ar[i])
        {
            index = i;
            lar = ar[i];
        }
    }
    
    return index;
}