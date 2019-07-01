#include <stdio.h>
void copy_arr(double *ar, double *source, int n);
void copy_ptr(double *ar, double *source, int n);
void copy_ptrs(double *ar, double *source, double *n);
void show_arr(double *ar);
int main(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);

    copy_ptrs(target3, source, source + 5);

    show_arr(target1);
    show_arr(target2);
    show_arr(target3);

    return 0;
}
void copy_arr(double *ar, double *source, int n)
{
    int i;
    for(i = 0; i < n; i++)
        ar[i] = source[i];
    
        
}
void copy_ptr(double *ar, double *source, int n)
{
    int i;
    for(i = 0; i < n; i++)
        ar[i] = *(source + i);
}
void copy_ptrs(double *ar, double *source, double * n)
{
    while (source <= n)
    {
        int i = n - source;
        ar[i] =  *n;
        n--;
    }
}
void show_arr(double * ar)
{
    int i;
    for(i = 0; i < 5; i++)
        printf("%.1f ", ar[i]);
    printf("\n");
}