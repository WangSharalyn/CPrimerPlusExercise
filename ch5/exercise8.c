// Write a program that displays the results of applying the modulus operation.
// The user should first enter an integer to be used as the second operand, which
// will then remain unchanged. Then the user enters the numbers for which the modulus 
// will be computed, terminating the process by entering 0 or less.
#include <stdio.h>
int main(void)
{
    int fir, sec;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &sec);
    printf("Now enter the first operand: ");
    scanf("%d", &fir);
    while (fir > 0)
    {
        printf("%d %% %d is %d\n", fir, sec, fir % sec);
        printf("Enter next number for first operand(<= 0 to quit): ");
        scanf("%d", &fir);
    }
    printf("Done\n");
        
    return 0;
}
