#include <stdio.h>
#define ARTICHOKES 2.05
#define BEETS 1.15
#define CARROTS 1.09
int main(void){
    float pound, weight, charge, a, b, c, shipping, discount;
    char ch;
    charge = weight = a = b = c = discount = shipping = 0;

    printf("Enter a, b, c or q(q to quit): ");
    while ((ch = getchar()) != 'q')
    {
        printf("Enter the weight of %c:", ch);
        scanf("%f", &pound);
        weight += pound;
        switch (ch)
        {
        case 'a':
            a += pound;
            charge += ARTICHOKES * pound;
            break;
        case 'b':
            b += pound;
            charge += BEETS * pound;
            break;
        case 'c':
            c += pound;
            charge += CARROTS * pound;
            break;
        default:
            break;
        }
    }
    if (charge >= 100)
    {
        discount = charge * 0.95;
    }
    if (weight <= 5)
        shipping = 6.5;
    else if(weight > 5 && weight <= 20)
        shipping = 14;
    else
        shipping = 14 + (weight - 20) * 0.5;
    
    printf("\n============================Good List=============================\n");
    printf("a)$%.2f/P\t\tb)$%.2f/p\t\tc)$%.2f/P", ARTICHOKES, BEETS, CARROTS);
    printf("\n============================Shopping List=========================\n");
    printf("\t\tWeight\tCharge\n");
    printf("ARTICHOKES      %5.2f\t%5.2f\n", a, a * ARTICHOKES);
    printf("BEETS           %5.2f\t%5.2f\n", b, b * BEETS);
    printf("CARROTS         %5.2f\t%5.2f\n", c, c * CARROTS);
    printf("Sum             %5.2f\t%5.2f\n", weight, charge);
    printf("discount: %.2f\tshipping: %.2f\n", discount, shipping);
    printf("Total: %.2f", charge - discount + shipping);

    return 0;    
}