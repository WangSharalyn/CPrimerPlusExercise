// Write a program that requests a type double number and prints the 
// value of the number cubed. Use a function of your own design to cube
// the value and print it. The main() program should pass the entered
// value to this function.
#include <stdio.h>
void cubed(double n);
int main(void)
{
    double a;
    printf("Enter a type double number: ");
    scanf("%lf", &a);

    cubed(a);

    return 0;
}

void cubed(double n){
    printf("The %f cubed is %f\n", n, n * n * n);
}