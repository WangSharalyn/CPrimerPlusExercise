// Write a program that requests the hours worked in a week and then prints the gross pay,
// the taxes, and the net pay. Assume the following: 
// a. Basic pay rate = $10.00/hr
// b. Overtime (in excess of 40 hours) = time and a half
// c. Tax rate: #15% of the first $300 20% of the next $150 25% of the rest
// Use #define constants, and don’t worry if the example does not conform to current tax law.
#include <stdio.h>
#define ELEMENT 10.00
#define TAXR1 0.15
#define TAXR2 0.20
#define TAXR3 0.25 
int main(void){
    float hours, salary, tax, income;

    printf("Enter the hours worked in a week: ");
    scanf("%f", &hours);

    if (hours <= 40)
    {
        salary = ELEMENT * hours;
    }else
    {
        salary = 40 * ELEMENT + (hours - 40) * 1.5 * ELEMENT;
    }
    
    if (salary <= 300)
    {
        tax = salary * TAXR1;
    }else if (salary <= 450 && salary > 300)
    {
        tax = 300 * TAXR1 + (salary - 300) * TAXR2;
    }else
    {
        tax = 300 * TAXR1 + 150 * TAXR2 + (salary - 450) * TAXR3;
    }
    
    income = salary - tax;

    printf("The gross pay is %.2f, the taxes are %.2f and the net pay is %.2f.", salary, tax, income);
    
    return 0;
}
