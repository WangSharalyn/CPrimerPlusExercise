// Write a function that returns the largest value stored in an array-of- int . Test the function in a simple program. 
#include <stdio.h>
int largest(int * ar);
int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};

    printf("The largest number of array is %d.\n", largest(arr));

    return 0;
}
int largest(int * ar)
{
    int i, lar;
    lar = ar[0];
    for ( i = 1; i < 5; i++)
    {
        if(lar < ar[i])
            lar = ar[i];
    }
    
    return lar;
}