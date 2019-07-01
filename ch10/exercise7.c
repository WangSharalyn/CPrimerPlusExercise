// Write a program that initializes a two-dimensional array-of- double and uses one of
// the copy functions from exercise 2 to copy it to a second two-dimensional array.
// (Because a two-dimensional array is an array of arrays, a one-dimensional
// copy function can be used with each subarray.) 
#include <stdio.h>
#define ROWS 2
#define COLS 5
void copy_arr(double *ar, double *source, int n);
void show_arr(double (* ar)[COLS], int rows, int cols);
int main(void)
{
    double arr[ROWS][COLS] = {
        {1.1, 2.2, 3.3, 4.4, 5.5},
        {2.2, 3.3, 4.4, 5.5, 6.6}
    };
    double target[ROWS][COLS];
    int i;
    
    for(i = 0; i < ROWS; i++)
        copy_arr(target[i], arr[i], COLS);
    show_arr(target, ROWS, COLS);

    return 0;
}
void copy_arr(double *ar, double *source, int n)
{
    int i;
    for(i = 0; i < n; i++)
        ar[i] = source[i];       
}
void show_arr(double (* ar)[COLS], int rows, int cols)
{
    int i, j;
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < cols; j++)
            printf("%.1f ", ar[i][j]);
        printf("\n");        
    }
}