#include <stdio.h>
void copy_ptrs(int cols, int rows, double target[rows][cols], double source[rows][cols]);
void show_ptr(int rows, int cols, double ar[rows][cols]);
int main(void)
{
    double source[3][5] = {[2] = {1.1, 2.2, 3.3, 4.4, 5.5}};
    double arr[3][5];

    copy_ptrs(5, 3, arr, source);
    show_ptr(3, 5, arr);

    return 0;
}
void copy_ptrs(int cols, int rows, double target[rows][cols], double source[rows][cols])
{
    int i, j;
    for ( i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            target[i][j] = source[i][j];    
}
void show_ptr(int rows, int cols, double ar[rows][cols])
{
    int i, j;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
            printf("%.1f ", ar[i][j]);
        putchar('\n');
    }
}