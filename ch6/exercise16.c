// Daphne invests $100 at 10% simple interst.Deirdre invests $100 at 5%
// interest compounded annually. Write a program that finds how many years it takes
// for the value of Deirdre's investment to exceed the value of Daphne's investment.
// Also show the two values at that time.
#include <stdio.h>
int main(void)
{
    float daphne = 100, deirdre = 100;
    int y = 0;
    do{
        daphne += 10;
        deirdre *= 1.05;
        y++;
    }while(daphne >= deirdre);

    printf("After %d years, Daphne got %.2f and Deirdre got %.2f\n", y, daphne, deirdre);
    // After 27 years, Daphne got 370.00 and Deirdre got 373.35

    return 0;
}