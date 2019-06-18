// Write a program that requests the user to enter a Fahrenheit temperatrue.
// The program should read the temperatrue as type doubel number and pass it as 
// as an argument to a user-supplied function call Temperatures(). This 
// function should calculate the Celsius equivalent and the Kelvin equivalent
// and display all three temperatures with a precision of two places to the 
// right of the decimal.
#include <stdio.h>
void Temperatures(double t);
int main(void)
{
    double n;
    int i;
    printf("Enter a Fahrenheit temperature: ");
    i = scanf("%lf", &n);
    while (i == 1)
    {
        Temperatures(n);
        printf("Enter a Fahrenheit temperature: ");
        i = scanf("%lf", &n);
    }
    
    return 0;
}

void Temperatures(double t){
    const float a = 5.0, b = 9.0, c = 32.0, d = 273.16;
    double ct;
    ct = a / b * (t - c);
    printf("The Celsius temperature is %lf,", ct);
    printf("the Kelvin temperature is %lf.\n", ct + d);
}
