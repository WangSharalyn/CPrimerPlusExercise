#include <stdio.h>
#define RATE1 8.75
#define RATE2 9.33
#define RATE3 10.00
#define RATE4 11.20
int main(void){
    int i, j;
    float hours, pay_rate;

    
    while (1)
    {   
        i = 0;
        while (i < 65){
            putchar('*');
            i++;
        }
        printf("\nEnter the number corresponding to the desired pay rate or action:\n");
        printf("1)$%.2f/hr\t\t\t\t2)$%.2f/hr\n", RATE1, RATE2);
        printf("3)$%.2f/hr\t\t\t\t4)$%.2f/hr\n", RATE3, RATE4);
        printf("5)quit\n");
        i = 0;
        while (i < 65)
        {
            putchar('*');
            i++;
        }

        printf("\nChoose the pay rate: ");
        scanf("%d", &j);

        if (j == 5)
        {
            break;
        }

        printf("Enter the hour worked: ");
        scanf("%f", &hours);        

        switch (j)
        {
        case 5:
            break;
        case 1:
            pay_rate = hours * RATE1;
            break;
        case 2:
            pay_rate = hours * RATE2;
            break;
        case 3:
            pay_rate = hours * RATE3;
            break;
        case 4:
            pay_rate = hours * RATE4;
            break;        
        default:
            printf("Please choose proper choice.\n");
            break;
        }

        printf("The pay rate is %f.\n", pay_rate);    
    }

    return 0;    
}