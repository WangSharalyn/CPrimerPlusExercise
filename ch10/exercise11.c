#include <stdio.h>
#define COLS 5
void double_arr(int ar[][5], int ROWS);
void show_arr(int ar[][5], int ROWS);
int main(void)
{
    int arra[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10}, 
        {9, 8, 7, 6, 5}
    };

    show_arr(arra, 3);
    double_arr(arra, 3);
    show_arr(arra, 3);

    return 0;
}
void double_arr(int ar[][5], int ROWS)
{
    int i, j;
    for(i = 0; i < ROWS; i++)
        for(j = 0; j < 5; j++)
            ar[i][j] *= 2;
}
void show_arr(int ar[][5], int ROWS)
{
    int i, j;
    for(i = 0; i < ROWS; i++)
    {
        for(j = 0; j < 5; j++)
            printf("%d ", ar[i][j]);
        putchar('\n');
    }
}