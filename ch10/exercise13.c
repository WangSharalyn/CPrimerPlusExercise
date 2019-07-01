#include <stdio.h>
void get_arr(double ar[][5], int ROWS, int COLS);
double row_mean(double * ar, int n);
double mean_arr(double ar[][5], int ROWS, int COLS);
double max(double ar[][5], int ROWS, int COLS);
int main(void)
{
    double row1, row2, row3;
    double arr[3][5];
    // double arr[3][5] = 
    // {
    //     {1, 1, 1, 1, 1},
    //     {1, 1, 1, 1, 1},
    //     {1, 1, 1, 1, 2}
    // };

    get_arr(arr, 3, 5);
    row1 = row_mean(arr[0], 5);
    row2 = row_mean(arr[1], 5);
    row3 = row_mean(arr[2], 5);

    printf("The mean values of rows are : %.2f, %.2f, %.2f\n", row1, row2, row3);
    printf("The mean value of array is %.2f\n", mean_arr(arr, 3, 5));
    printf("The max is %.2f.\n", max(arr, 3, 5));

    return 0;
}
void get_arr(double ar[][5], int ROWS, int COLS)
{
    int i, j;
    for ( i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLS; j++)
            scanf("%lf", &ar[i][j]);
    }
}
double row_mean(double * ar, int n)
{
    int i;
    double tot;
    tot = 0;
    for(i = 0; i < n; i++)
        tot += ar[i];

    return tot/n;
}
double mean_arr(double ar[][5], int ROWS, int COLS)
{
    int i, j;
    double total;
    for ( i = 0; i < ROWS; i++)
        for(j = 0; j < COLS; j++)
            total += ar[i][j];
        
    return total / 15;    
}
double max(double ar[][5], int ROWS, int COLS)
{
    int i, j;
    double larger;
    larger = ar[0][0];
    for(i = 0; i < ROWS; i++)
    {
        for ( j = 0; j < COLS; j++)
        {
            if(larger < ar[i][j])
                larger = ar[i][j];
        } 
    }

    return larger;
}