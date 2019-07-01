#include <stdio.h>
#define SIZE 7
void copy_ptrs(double * ar, double * start, int n);
void show_arr(double * ar, int n);
int main(void)
{
    double arr[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    double targe[3];

    copy_ptrs(targe, arr + 2, 3);
    show_arr(targe, 3);

    return 0;
}
void copy_ptrs(double * ar, double * start, int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        ar[i] = *start;
        start++;
    }
    
}
void show_arr(double * ar, int n)
{
    int i;
    for(i = 0; i < n; i++)
        printf("%.1f ", ar[i]);
}