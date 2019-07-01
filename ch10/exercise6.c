// Write a function that reverses the contents of an array of double and test it in a simple program. 
#include <stdio.h>
#define SIZE 5
void sort(double * ar, int n);
void show_arr(double * ar, int n);
int main(void)
{
    double arr[SIZE] = {1.1, 4.4, 5.5, 2.2, 3.3};
    sort(arr, SIZE);
    show_arr(arr, SIZE);

    return 0;
}
void sort(double * ar, int n)
{
    int i, j;
    double temp;
    for ( i = 0; i < n; i++)
    {
        for ( j = i; j < n; j++)
        {
            if(ar[i] > ar[j])
            {
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
}
void show_arr(double * ar, int n)
{
    int i;
    for ( i = 0; i < n; i++)
        printf("%.1f ", ar[i]);    
}