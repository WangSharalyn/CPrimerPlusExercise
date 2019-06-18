// Write a program that converts time in minutes to time in 
// hours and minutes. Use #define or const to creat a symbolic
// constant for 60. Use a while loop to allow the user to enter values
// repeatedly and terminate the loop if a value for the time of 0
// or less is entered.
#include <stdio.h>
#define M_PER_H 60

int main(void) {
    int min, hour, left;

    printf("Convert minutes to hours and minutes !\n");
    printf("Enter the number of the minutes (<=0 to quit):\n");
    scanf("%d", &min);

    while (min > 0)
    {
        hour = min/M_PER_H;
        left = min % M_PER_H;

        printf("%d minutes is %d hours, %d minutes.\n", min, hour, left);
        printf("Please enter next value(<=0 to quit):\n");
        scanf("%d", &min);
    }
    printf("Done!\n");
    

    return 0;
}