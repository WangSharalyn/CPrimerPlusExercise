#include <stdio.h>
#define SIZE 4
void add_sum(int * arr1, int * arr2, int * arr3, int n);
void show_arr(int * arr, int n);
int main(void)
{
    int arr1[SIZE] = {2, 4, 5, 8};
    int arr2[SIZE] = {1, 0, 4, 6};
    int arr3[SIZE];

    add_sum(arr1, arr2, arr3, SIZE);
    show_arr(arr3, SIZE);

    return 0;
}
void add_sum(int * arr1, int * arr2, int * arr3, int n)
{
    int i;
    for(i = 0; i < n; i++)
        arr3[i] = arr1[i] + arr2[i];
}
void show_arr(int * arr, int n)
{
    int i;
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
}