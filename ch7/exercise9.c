// Write a program that accepts a positive integer as input and then displays all the prime numbers smaller than or equal to that number. 
#include <stdio.h>
int main(void){
    int num, i, count;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num > 0 && (num/1 == num))
    {        
        if (num == 1)
        {
            printf("There are no prime number smaller than or equal to that number.\n");
        }else
        {
            printf("The prime numbers smaller than or equal to that number are: ");
            for ( i = 2; i <= num; i++)
            {
                count = 0;
                for (int j = 2; j <= i; j++)
                {
                    if (i % j == 0 && i != j)
                        break;
                    else
                        count++;                      
                }
                if (count > 0)
                {
                    printf("%d ", i);
                }
                   
            }   
        }   
    }

    return 0;
}