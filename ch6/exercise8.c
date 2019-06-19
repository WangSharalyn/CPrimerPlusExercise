// Write a program that requests two floating-point numbers and prints
// the value of their difference divided by their product. Have the program
// loop through pairs of input values until the user enters nonnumeric input.
#include <stdio.h>
int main(void)
{
    float a, b;
    int i;

    printf("Enter two floating-point numbers: ");
    i = scanf("%f%f", &a, &b);

    while (i == 2)
    {
        printf("The value of their difference divided by their product: %f\n", (a - b)/(a * b));
        printf("Enter next two floating-point numbers: ");
        i = scanf("%f%f", &a, &b);
    }
    printf("Done!\n");
    
    return 0;
}
