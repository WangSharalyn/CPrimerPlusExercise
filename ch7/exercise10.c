#include <stdio.h>
int main(void){
    float salary, tax;
    int kind;

    printf("Enter the salary and category: ");
    while (scanf("%f%d", &salary, &kind) == 2)
    {
        switch (kind)
        {
        case 1:
            tax = salary > 17850 ? (17850 * 0.15) + (salary - 17850) * 0.28:salary * 0.15;
            break;
        case 2:
            tax = salary > 23900 ? (23900 * 0.15) + (salary - 23900) * 0.28:salary * 0.15;
            break;
        case 3:
            tax = salary > 29750 ? (29750 * 0.15) + (salary - 29750) * 0.28:salary * 0.15;
            break;
        case 4:
            tax = salary > 14875 ? (14875 * 0.15) + (salary - 14875) * 0.28:salary * 0.15;
            break;        
        default:
            break;
        }
        printf("The tax is %.2f.\n", tax);
        printf("Enter the salary and category: ");
    }
    printf("Done!");

    return 0;    
}