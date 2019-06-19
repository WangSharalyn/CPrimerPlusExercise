// Consider these two infinite series:
// 1.0 + 1.0/2.0 + 1.0/3.0 + ...
// 1.0 - 1.0/2.0 + 1.0/3.0 - ...
// Write a program that evaluates running totals of these two series 
// up to some limit of number of terms.
#include <stdio.h>
int main(void)
{
    int times;
    printf("Enter the limit interactively: ");
    scanf("%d", &times);

    int i, j;
    float k = 1.0;

    while (times > 0)
    {
        float inf1 = 0;
        float inf2 = 0;

        for (i = 1, k = 1.0, j = -1; i <= times; i++, k++, j *= (-1))
            {
                inf1 += (1.0 / k);
                inf2 += ((1.0 / k) * j);
            }
        printf("infinite serie 1 is %f\ninfinite serie 2 is %f\n", inf1, -inf2); 
        printf("Enter the next limit: ");
        scanf("%d", &times);  
    }
    
    return 0;
}
