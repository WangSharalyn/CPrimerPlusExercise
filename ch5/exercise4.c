// Write a program that asks the user to enter a height in centimeters
// and then displays the height in centimeters and in feet and inches.
// Fractional centimeters and inches should be allowed, and the program
// should allow the user to continue entering heights until a nonpositive
// value is entered. A sample run should look like this: Enter a height
// in centimeters: 182...
#include <stdio.h>
int main(void)
{
    const float INCH_PER_CM = 0.3937;
    const int FEET_PER_INCH = 12;

    float height, inch, left;
    int feet;
    printf("Enter a height in centimeters: ");
    scanf("%f", &height);

    while (height > 0)
    {
         inch = height * INCH_PER_CM;
         feet = inch / FEET_PER_INCH;
         left = inch - feet * FEET_PER_INCH;

         printf("%.1f cm = %d feet, %.1f inches\n", height, feet, left);
         printf("Enter a height in centimeters(<=0 to quit): ");
         scanf("%f", &height);
    }
    printf("bye\n");
    
    return 0;
}
